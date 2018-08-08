function [ t_star, x_star,  y, u_star1, u_star2 ] = bvp4c_heloNEW2(tf)

close all
fs=5000;
t_star=linspace(0,tf,fs);
solinit = bvpinit(t_star,@heli_init);
% 
% ae1=1.3623;
% ae2=-0.3787;
% cl=0.2025;
% at=-0.4638;
% be=0.1163;
% bt=0.9621;
% ce=0.0447;
% ct=0.0076;
% bl=-0.1032;

% MF4
ae1=1.3969;
ae2=-0.1037;
cl=0.0174;
at=-0.2032;
be=0.3502;
bt=1.9707;
ce=0.2642;
ct=0.4579;
bl=0.2915;

% MF1
% ae1=0.897774292800465;
% ae2=0.262149659708340;
% cl=2.66539506373956e-07;
% at=0.0299387993613542;
% be=0.242326589853033;
% bt=2.32610751155522;
% ce=0.0422113991393604;
% ct=0.0371585044068749;
% bl=0.181162986000263;

options = bvpset('stats','on');
options = bvpset('Nmax', 30000);

sol = bvp4c(@heli_ode,@heli_bc,solinit,options);


y=deval(sol,t_star);

x_star(1:6,:)=y(1:6,:);


u_star1=((y(8,:).*bl.*cos(y(3,:)).*sin(y(5,:))-y(10,:).*be.*cos(y(5,:)))/2);
u_star2=(-y(12,:)*bt/2);

% u(1)=((x(8)*bl*cos(x(3))*sin(x(5))-x(10)*be*cos(x(5)))/2)
% u2= (-x(12)*bt/2)
function v = heli_init(x)
%EX4INIT  Guess function 
%   V = hw6INIT(X) returns a column vector V that is a guess for x.
v = [sin(x)
     cos(x)
     sin(x)
     cos(x)
     sin(x)
     cos(x)
     sin(x)
     cos(x)
     sin(x)
     cos(x)
     sin(x)
     cos(x)
     ];
end
  
function dxdt = heli_ode(t,x)
%Hw6ODE  ODE funcion for Hw6.

%x1 - travel
%x2 - Dtravel
%x3 - elev
%x4 - Delev
%x5 - theta
%x6 - Dtheta

%x7 - lambda_1
%x8 - lambda2
%x9 - lambda3
%x10 - lambda4
%x11 - lambda5
%x12 - lambda6
% u(1)=((x(8)*bl*cos(x(3))*sin(x(5))-x(10)*be*cos(x(5)))/2)
% u2= (-x(12)*bt/2)
dxdt = [x(2);
        -cl*x(2)-bl*cos(x(3))*sin(x(5))*((x(8)*bl*cos(x(3))*sin(x(5))-x(10)*be*cos(x(5)))/2);
        x(4);
        -ae1*sin(x(3))-ae2*sin(x(3))*cos(x(5))-ce*x(4)+be*cos(x(5))*((x(8)*bl*cos(x(3))*sin(x(5))-x(10)*be*cos(x(5)))/2);
        x(6);
        -at*cos(x(3))*sin(x(5))-ct*x(6)+bt*(-x(12)*bt/2);
        0;
        x(7)-cl*x(8);
        x(8)*bl*sin(x(3))*sin(x(5))*((x(8)*bl*cos(x(3))*sin(x(5))-x(10)*be*cos(x(5)))/2)-x(10)*ae1*cos(x(3))-x(10)*ae2*cos(x(3))*cos(x(5))+x(12)*at*sin(x(3))*sin(x(5));
        x(9)-x(10)*ce;
        -x(8)*bl*cos(x(3))*cos(x(5))*((x(8)*bl*cos(x(3))*sin(x(5))-x(10)*be*cos(x(5)))/2)+ae2*x(10)*sin(x(3))*sin(x(5))-be*x(10)*sin(x(5))*((x(8)*bl*cos(x(3))*sin(x(5))-x(10)*be*cos(x(5)))/2)-x(12)*at*cos(x(3))*cos(x(5));
        x(11)-ct*x(12)];
end   
      
      
 function res = heli_bc(xa,xb)
%Hw6BC  Boundary conditions 
res = [xa(1)
       xa(2)
       xa(3)
       xa(4)
       xa(5)
       xa(6)
       xb(1)-pi
       xb(2)
       xb(3)
       xb(4)
       xb(5)
       xb(6)]; 
 end

figure('Name','Precalculated \travel and Dtravel','NumberTitle','off')
plot(t_star,x_star(1,:));
hold on;
grid on;
% plot(t_star,x_star(2,:));

% hl = legend('Angle $\phi$','Angular velocity $\dot{\phi}$', 'Control input u');
% set(hl, 'Interpreter', 'latex');
% set(hl, 'Location', 'Best')
% xlabel('time (s)')


figure('Name','Precalculated elev and Delev','NumberTitle','off')
plot(t_star,x_star(3,:));
hold on;
grid on;

% hl = legend('Angle $\phi$','Angular velocity $\dot{\phi}$', 'Control input u');
% set(hl, 'Interpreter', 'latex');
% set(hl, 'Location', 'Best')
% xlabel('time (s)')



figure('Name','Precalculated theta and Dtheta','NumberTitle','off')
plot(t_star,x_star(5,:));
hold on;
grid on;

% 
% figure('Name','Inputs','NumberTitle','off')
% plot(t_star,f(1,:));
% hold on;
% grid on;
% plot(t_star,f(2,:));

% 
% hl = legend('Angle $\phi$','Angular velocity $\dot{\phi}$', 'Control input u');
% set(hl, 'Interpreter', 'latex');
% set(hl, 'Location', 'Best')
% xlabel('time (s)')

end