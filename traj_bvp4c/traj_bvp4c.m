function [ t_star, x_star, u_star ] = traj_bvp4c(par_id)
% Solves second task of HW7, with 'y^2'
t = linspace(0,5,1001);

solinit = bvpinit(t, @init_guess);
options = bvpset('Stats','on','RelTol',1e-3);

sol = bvp4c(@heli_odes , @heli_bc, solinit, options);

BS = deval(sol,t);

%Plotting
plot(t, BS(1, :), t, BS(3, :), t, BS(5, :));
legend('Travel', 'Elev', 'Pitch');

figure;
plot(t, BS(7,:), t, BS(8,:));
legend('u1', 'u2');



    function dxdt = heli_odes(t, x)
        % x(7) ~ u(1)
        % x(8) ~ u(2)
        cl = par_id.cl;
        bl = par_id.bl;
        ae1 = par_id.ae1;
        ae2 = par_id.ae2;
        ce = par_id.ce;
        be = par_id.be;
        at = par_id.at;
        ct = par_id.ct;
        bt = par_id.bt;
        dxdt = [x(2);
                -cl*x(2)-bl*cos(x(3))*sin(x(5))*x(7);
                x(4);
                ae1*sin(x(3))-ae2*sin(x(3))*cos(x(5))-ce*x(4)+be*cos(x(5))*x(7);
                x(6);
                -at*cos(x(3))*sin(x(5))-ct*x(6)+bt*x(8)
                1
                1];
    end


    function res = heli_bc(xa, xb)
        res =   [   xa(1)  
                    xb(1) - pi  %travel start, end
                    xa(3)
                    xa(5)
                    xb(2)
                    xb(3)
                    xb(4)
                    xb(5)]; 
    end

    function v = init_guess(x)
        v = [   sin(x)
                sin(x)
                0.25
                0
                sin(x)
                cos(x)
                sin(x)
                sin(x)]; 
    end

t_star = t;
x_star = BS(1:2,:);
u_star = 1;
end
