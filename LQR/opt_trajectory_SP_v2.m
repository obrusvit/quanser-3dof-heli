function [ t_star, x_star, x0, u_star, u_star_v1,u_star_v2, Ts, Tf ] = opt_trajectory_SP_v2()
close all;
ae1=1.3623;
ae2=-0.3787;
cl=0.2025;
at=-0.4638;
be=0.1163;
bt=0.9621;
ce=0.0447;
ct=0.0076;
bl=-0.1032;
fsmax=10;



%% Final time and sample freq
N = 250;
Tf = 7;
x0 = [0;0;0;0;0;0];

umin = -10;
umax = 10;
opti = casadi.Opti();

% define decision variables
X = opti.variable(6,N+1); % states
travel = X(1, :);
Dtravel = X(2, :);

elev = X(3, :);
Delev = X(4, :);

theta = X(5, :);
Dtheta = X(6, :);

U = opti.variable(2,N); % controls

opti.minimize(Tf);

%% Dynamic constraints
f = @(x,u) helicopter_ode(x, u, cl, bl, ae1, ae2, ce, be, at, ct, bt);

Ts = Tf/N; % control interval length


for k=1:N % loop over control intervals
            % Runge-Kutta 4 integration
            k1 = f(X(:,k),         U(:,k));
            k2 = f(X(:,k)+Ts/2*k1, U(:,k));
            k3 = f(X(:,k)+Ts/2*k2, U(:,k));
            k4 = f(X(:,k)+Ts*k3,   U(:,k));
            x_next = X(:,k) + Ts/6*(k1+2*k2+2*k3+k4);
            opti.subject_to(X(:,k+1)==x_next); % close the gaps
end

% Initial conditions
opti.subject_to(travel(1)==x0(1));   % start at position 0 ...
opti.subject_to(Dtravel(1)==x0(2)); % ... from stand-still 

opti.subject_to(elev(1)==x0(3));   % start at position 0 ...
opti.subject_to(Delev(1)==x0(4)); % ... from stand-still 

opti.subject_to(theta(1)==x0(5));   % start at position 0 ...
opti.subject_to(Dtheta(1)==x0(6)); % ... from stand-still 


% Final-time constraints
opti.subject_to(travel(end)==pi);
opti.subject_to(Dtravel(end)==0);

opti.subject_to(elev(end)==0.1);
opti.subject_to(Delev(end)==0);


opti.subject_to(theta(end)==0);
opti.subject_to(Dtheta(end)==0);

opti.subject_to(U(1,1)==0);
opti.subject_to(U(2,1)==0);


%opti.subject_to(abs(U(1,:))<=Vb);
%opti.subject_to(abs(U(2,:))<=Vb);

%opti.subject_to(umin<=U<=umax); %probably unnecessary

 opti.subject_to(-pi/3<=theta<=pi/3);
 opti.subject_to(-pi/2<=elev<=pi/2);







% Initialize decision variables
opti.set_initial(U, 0);

opti.set_initial(travel, 0);
opti.set_initial(Dtravel, 0);

opti.set_initial(elev, 0);
opti.set_initial(Delev, 0);

opti.set_initial(theta, 0);
opti.set_initial(Dtheta, 0);


% Solve NLP
opti.solver('ipopt'); % use IPOPT solver
sol = opti.solve();

% Extract the states and control from the decision variables
x_nlp = sol.value(X)';
u_nlp = sol.value(U)';
t_nlp = (0:N)*Ts;




figure('Name','Precalculated \psi and \dot{psi}','NumberTitle','off')
plot(t_nlp,x_nlp(:,1));
hold on;
grid on;
plot(t_nlp,x_nlp(:,2));
hl = legend('$\psi$', '$\dot{\psi}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')



figure('Name','Precalculated \theta and \dot{theta}','NumberTitle','off')
plot(t_nlp,x_nlp(:,3));
hold on;
grid on;
plot(t_nlp,x_nlp(:,4));
hl = legend('$\theta$', '$\dot{\theta}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


figure('Name','Precalculated \phi and \dot{phi}','NumberTitle','off')
plot(t_nlp,x_nlp(:,5));
hold on;
grid on;
plot(t_nlp,x_nlp(:,6));
hl = legend('$\phi$', '$\dot{\phi}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')



figure('Name','Inputs ','NumberTitle','off')
plot(t_nlp(1:end-1),u_nlp(:,1));
hold on;
grid on;
plot(t_nlp(1:end-1),u_nlp(:,2));
hl = legend('u1', 'u2');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')

%outputs
t_star=t_nlp;
x_star=x_nlp;
u_star=u_nlp;


%align time and inputs
u_star_v1=horzcat(t_star(1,1:end-1)',u_star(:,1));
u_star_v2=horzcat(t_star(1,1:end-1)',u_star(:,2));



end