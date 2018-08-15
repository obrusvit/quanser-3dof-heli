function [t_casadi, u_casadi, x_casadi, Tf_casadi, N] = find_opt_trajectory(par_id, x_star, u_star1, u_star2)
%% optimal time, inputs, states, Final time, number of samples

%% Final time and sample freq
N = 4999;
% x0 = [0.48;0;0;0;0;0];
xa = [0;0;0;0;0;0];
xb = [pi;0;0;0;0;0];

umin = -1.3;
umax = 1.3;
opti = casadi.Opti();

Tf_casadi = 10;
% Tf = opti.variable();


% define decision variables
X = opti.variable(6,N+1); % states
lambda = X(1, :);
dlambda = X(2, :);

epsilon = X(3, :);
depsilon = X(4, :);

theta = X(5, :);
dtheta = X(6, :);

U = opti.variable(2,N+1); % controls

opti.minimize(U(1,:)*U(1,:)'+U(2,:)*U(2,:)');
% opti.minimize(Tf);

%% Dynamic constraints
f = @(x,u) helicopter_ode(x, u, par_id.cl, par_id.bl, par_id.ae1, ...
    par_id.ae2, par_id.ce, par_id.be, par_id.at, par_id.ct, par_id.bt);

Ts = Tf_casadi/N; % control interval length


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
opti.subject_to(lambda(1)==xa(1));   % start at position 0 ...
opti.subject_to(dlambda(1)==xa(2)); % ... from stand-still 

opti.subject_to(epsilon(1)==xa(3));   % start at position 0 ...
opti.subject_to(depsilon(1)==xa(4)); % ... from stand-still 

opti.subject_to(theta(1)==xa(5));   % start at position 0 ...
opti.subject_to(dtheta(1)==xa(6)); % ... from stand-still 


% Final-time constraints
opti.subject_to(lambda(end)==xb(1));
opti.subject_to(dlambda(end)==xb(2));

opti.subject_to(epsilon(end)==xb(3));
opti.subject_to(depsilon(end)==xb(4));

opti.subject_to(theta(end)==xb(5));
opti.subject_to(dtheta(end)==xb(6));

opti.subject_to(U(1,1)==0);
opti.subject_to(U(2,1)==0);


% Running time constraints
opti.subject_to(umin<=U<=umax); %probably unnecessary


% Restriction angle epsilon (elevation)
opti.subject_to(-0.2618<=epsilon<=0.2618); %0.2618 ~ 15 deg
% opti.subject_to(-0.6<=epsilon<=0.6); %0.6  ~ 34.4 deg


% ..and pitch
%opti.subject_to(-1.05<=theta<=1.05); %1.05rad ~ 60deg
% opti.subject_to(-1.3<=theta<=1.3); %1.3rad ~ 75deg
opti.subject_to(-1.5<=theta<=1.5); %1.5rad ~ 85deg





% Restriction to change of inputs 
% for i = 1:N-1
%     %opti.subject_to((abs((U(1,i+1)-U(1,i))/Ts)) < 100);
%     %opti.subject_to((abs((U(2,i+1)-U(2,i))/Ts)) < 100);
%     opti.subject_to(((U(1,i+1)-U(1,i))/Ts) < 10);
%     opti.subject_to(((U(2,i+1)-U(2,i))/Ts) < 10);
% end


% Initialize decision variables
opti.set_initial(U(1,:), u_star1);
opti.set_initial(U(2,:), u_star2);

opti.set_initial(lambda, x_star(1,:));
opti.set_initial(dlambda, x_star(2,:));

opti.set_initial(epsilon, x_star(3,:));
opti.set_initial(depsilon, x_star(4,:));

opti.set_initial(theta, x_star(5,:));
opti.set_initial(dtheta, x_star(6,:));


% Solve NLP
opti.solver('ipopt'); % use IPOPT solver
sol = opti.solve();

% Extract the states and control from the decision variables
x_casadi = sol.value(X)';
u_casadi = sol.value(U)';
t_casadi = (0:N)*Ts;


end

