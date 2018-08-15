close all
%% Precalculated trajectory and input
% time vector - t_star, controls - u_star, state - x_star
%load('opt_trajectory_for8sec.mat')
% 
% 
% subplot(3,1,1)
% plot(t_star,x_star(:,1));
% hold on;
% grid on;
% plot(t_star,x_star(:,2));
% hl = legend('$\psi$', '$\dot{\psi}$');
% set(hl, 'Interpreter', 'latex');
% set(hl, 'Location', 'Best')
% xlabel('time (s)')
% title('Precalculated psi and dpsi');

% 
% subplot(3,1,2)
% plot(t_star,x_star(:,3));
% hold on;
% grid on;
% plot(t_star,x_star(:,4));
% hl = legend('$\theta$', '$\dot{\theta}$');
% set(hl, 'Interpreter', 'latex');
% set(hl, 'Location', 'Best')
% xlabel('time (s)')
% title('Precalculated theta and dtheta');
% 
% subplot(3,1,3)
% plot(t_star,x_star(:,5));
% hold on;
% grid on;
% plot(t_star,x_star(:,6));
% hl = legend('$\phi$', '$\dot{\phi}$');
% set(hl, 'Interpreter', 'latex');
% set(hl, 'Location', 'Best')
% xlabel('time (s)')
% title('Precalculated phi and dphi');
% 
% 
% figure('Name','Inputs ','NumberTitle','off')
% plot(t_star,u_star(:,1));
% hold on;
% grid on;
% plot(t_star,u_star(:,2));
% hl = legend('u1', 'u2');
% set(hl, 'Interpreter', 'latex');
% set(hl, 'Location', 'Best')
% xlabel('time (s)')
% 

%% Stabilization
x=x_casadi;
u1=u_casadi(:,1);
u2=u_casadi(:,2);
% u1 = u_star_v1(:,2);
% u2 = u_star_v2(:,2);
% Weight matrices
% Q = diag([1 0 1 0 100000 100]); % state
% R =0.01*eye(2); % control
% R = diag([10 0.01]);

Q = diag([1000 2 1 1 100 1]); % state
% R =0.01*eye(2); % control
R = 0.001*diag([1 1]);


% Linearization around the optimal trajectory
% x := [travel; Dtravel; elev; Delev; pitch; Dpitch]
A_cont_lin = zeros(6, 6, numel(t_casadi));
B_cont_lin = zeros(6, 2, numel(t_casadi));

A = zeros(6, 6, numel(t_casadi));
B = zeros(6, 2, numel(t_casadi));
TS = Tf_casadi/5000;

for i=1:numel(t_star)
    % Matrix A continuous linearized
    A_cont_lin(1,2,i)= 1;
    A_cont_lin(2,2,i)=-cl;
    A_cont_lin(2,3,i)=bl*sin(x(i,3))*sin(x(i,5))*u1(i); 
    A_cont_lin(2,5,i)=-bl*cos(x(i,3))*cos(x(i,5))*u1(i); 
    A_cont_lin(3,4,i)=1;
    A_cont_lin(4,3,i) = -ae1*cos(x(i,3))-ae2*cos(x(i,3))*cos(x(i,5));
    A_cont_lin(4,4,i)=-ce;
    A_cont_lin(4,5,i)=ae2*sin(x(i,3))*sin(x(i,5))-be*sin(x(i,5))*u1(i);   
    A_cont_lin(5,6,i)=1;
    A_cont_lin(6,3,i)=at*sin(x(i,3))*sin(x(i,5));
    A_cont_lin(6,5,i)=-at*cos(x(i,3))*cos(x(i,5));
    A_cont_lin(6,6,i)=-ct;
    
    %Matrix A discretized
    A(:,:,i) = eye(6) + TS * A_cont_lin(:,:,i);
    
    %Matrix B continuous linearized
    B_cont_lin(2,1,i)=-bl*cos(x(i,3))*sin(x(i,5));
    B_cont_lin(4,1,i)=be*cos(x(i,5));
    B_cont_lin(6,2,i)=bt;
    
    %Matrix B discretized
    B(:,:,i) = TS * B_cont_lin(:,:,i);
    
end

% Design a LQR stabilizying the trajectory
S = zeros(6, 6, numel(t_star));
K = zeros(2, 6, numel(t_star));


S(:,:, end) = Q;
K(:,:, end) = R\B(:,:, end)'*S(:,:, end);

for i = (numel(t_star) - 1):-1:1    
    K(:,:,i) = (B(:,:,i)'*S(:,:,i+1)*B(:,:,i) + R)\(B(:,:,i)'*S(:,:,i+1)*A(:,:,i));
    S(:,:,i) = A(:,:,i)'*S(:,:,i+1)*(A(:,:,i) - B(:,:,i)*K(:,:,i)) + Q;
end
% K= permute(-squeeze(K),[2,3,1]);
K = -squeeze(K);

%Create timeseries
K_TS = timeseries(K, t_casadi);
x_star_TS = timeseries(x, t_casadi);

u_star1_TS = timeseries(u1, t_casadi);
u_star2_TS = timeseries(u2, t_casadi);









