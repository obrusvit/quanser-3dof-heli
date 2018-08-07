function [ t_star, x_star, u_star ] = hw6_chirtand()


fs=100;
t_star=linspace(0,5,fs);
solinit = bvpinit(t_star,@hw6init);
a1=9.81;
a2=0.1;
a3=1;

options = bvpset('stats','on');

sol = bvp4c(@hw6ode,@hw6bc,solinit,options);


y=deval(sol,t_star);

x_star(1:2,:)=y(1:2,:);
u_star=y(4,:)*a3/2;


function v = hw6init(x)
%EX4INIT  Guess function 
%   V = hw6INIT(X) returns a column vector V that is a guess for x.
v = [cos(x)
     sin(x)
     cos(x)
     sin(x)];
end
  
function dxdt = hw6ode(t,x)
%Hw6ODE  ODE funcion for Hw6.
dxdt = [ x(2);
        -a1*sin(x(1))-a2*x(2)+a3^2*x(4)/2
        -a1*x(4)*cos(x(1))
         x(3)-a2*x(4)  ];
end   
      
      
 function res = hw6bc(xa,xb)
%Hw6BC  Boundary conditions 
res = [xa(1)
       xa(2)
       xb(1)-pi
       xb(2)]; 
 end

figure('Name','Precalculated \phi and \dot{phi}','NumberTitle','off')
plot(t_star,x_star(1,:));
hold on;
grid on;
plot(t_star,x_star(2,:));
plot(t_star,u_star);
hl = legend('Angle $\phi$','Angular velocity $\dot{\phi}$', 'Control input u');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


end