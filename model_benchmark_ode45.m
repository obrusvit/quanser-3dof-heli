%% Some playing with the first model

% initialize parameters
%model_benchmark_init;

% create function handles for inputs
v1 = @(t)0;
v2 = @(t)0;


f1 = @(t) 1*v1(t);
f2 = @(t) 1*v2(t);

fs = @(t) (f1(t) + f2(t));
fd = @(t) (f1(t) - f2(t));

% create function handle for odes
F = @(t, x)[x(2);
            -cl*x(2)-bl*cos(x(3))*sin(x(5))*fs(t)
            x(4)
            -ae1*sin(x(3))-ae2*sin(x(3))*cos(x(5))-ce*x(4)+be*cos(x(5))*fs(t)
            x(6)
            -at*cos(x(3))*sin(x(5))-ct*x(6)+bt*fd(t)];
        
x0 = [0; 0; 0; 0; 0.1; 0];

t = (0:0.001:30);
[t,x] = ode45(F,t,x0);
plot(t,x);
legend('travel','dtravel','elev','delev', 'pitch', 'dpitch');