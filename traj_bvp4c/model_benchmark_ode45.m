%% Some playing with the first model


f1 = @(t) f_1(int32(t/0.002));
f2 = @(t) f_2(int32(t/0.002));

fs = @(t) (f1(t) + f2(t));
fd = @(t) (f1(t) - f2(t));

% create function handle for odes
F = @(t, x)[x(2);
            -cl*x(2)-bl*cos(x(3))*sin(x(5))*fs(t)
            x(4)
            -ae1*sin(x(3))-ae2*sin(x(3))*cos(x(5))-ce*x(4)+be*cos(x(5))*fs(t)
            x(6)
            -at*cos(x(3))*sin(x(5))-ct*x(6)+bt*fd(t)];
        
x0 = [0; 0; 0; 0; 0; 0];

t = (0.002:0.002:10);
[t,x] = ode23(F,t,x0);
plot(t,x(:,1));
hold on;
plot(t,x(:,3));
plot(t,x(:,5));
legend('travel','dtravel','elev','delev', 'pitch', 'dpitch');