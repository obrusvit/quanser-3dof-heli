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

%% Trajectory Stabilization
% x=x_casadi;
% u1=u_casadi(:,1);
% u2=u_casadi(:,2);

% x=x_casadi8;
% u1=u_casadi8(:,1);
% u2=u_casadi8(:,2);
x=x_casadi10;
u1=u_casadi10(:,1);
u2=u_casadi10(:,2);


% Q = diag([10 2 100 1 100 1]); % Q for 12 sec trajectory
% R = 10*diag([1 1]); % R for 12 sec trajectory

Q = diag([50 2 100 1 100 1]); % Q for 10 sec trajectory
R = 1*diag([1 1]); % R for 10 sec trajectory


% Linearization around the optimal trajectory
% x := [travel; Dtravel; elev; Delev; pitch; Dpitch]
A_cont_lin = zeros(6, 6, numel(t_casadi8));
B_cont_lin = zeros(6, 2, numel(t_casadi8));

A = zeros(6, 6, numel(t_casadi8));
B = zeros(6, 2, numel(t_casadi8));
% TS = Tf_casadi/5000;
TS = Tf_casadi10/5000;

for i=1:numel(t_casadi)
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
S = zeros(6, 6, numel(t_casadi));
K = zeros(2, 6, numel(t_casadi));


S(:,:, end) = Q;
K(:,:, end) = R\B(:,:, end)'*S(:,:, end);

for i = (numel(t_casadi) - 1):-1:1    
    K(:,:,i) = (B(:,:,i)'*S(:,:,i+1)*B(:,:,i) + R)\(B(:,:,i)'*S(:,:,i+1)*A(:,:,i));
    S(:,:,i) = A(:,:,i)'*S(:,:,i+1)*(A(:,:,i) - B(:,:,i)*K(:,:,i)) + Q;
end
% K= permute(-squeeze(K),[2,3,1]);
K = -squeeze(K);

%Create timeseries
K_TS = timeseries(K, t_casadi10);
x_star_TS = timeseries(x, t_casadi10);

u_star1_TS = timeseries(u1, t_casadi10);
u_star2_TS = timeseries(u2, t_casadi10);


%% ZeroState stabilization
A_reg_lin = zeros(6, 6);
B_reg_lin = zeros(6, 2);

x0_reg = [pi; 0; 0; 0; 0.0873; 0];
% Matrix A continuous linearized
A_reg_lin(1,2)= 1;
A_reg_lin(2,2)=-cl;
A_reg_lin(2,3)=bl*sin(x0_reg(3))*sin(x0_reg(5))*0; 
A_reg_lin(2,5)=-bl*cos(x0_reg(3))*cos(x0_reg(5))*0; 
A_reg_lin(3,4)=1;
A_reg_lin(4,3) = -ae1*cos(x0_reg(3))-ae2*cos(x0_reg(3))*cos(x0_reg(5));
A_reg_lin(4,4)=-ce;
A_reg_lin(4,5)=ae2*sin(x0_reg(3))*sin(x0_reg(5))-be*sin(x0_reg(5))*0;   
A_reg_lin(5,6)=1;
A_reg_lin(6,3)=at*sin(x0_reg(3))*sin(x0_reg(5));
A_reg_lin(6,5)=-at*cos(x0_reg(3))*cos(x0_reg(5));
A_reg_lin(6,6)=-ct;

B_reg_lin(2,1)=-bl*cos(x0_reg(3))*sin(x0_reg(5));
B_reg_lin(4,1)=be*cos(x0_reg(5));
B_reg_lin(6,2)=bt;


Q_REG = diag([1 0 2000 0 120 0]);
R_REG = diag([10 10]);
K_REG = lqr(A_reg_lin, B_reg_lin, Q_REG, R_REG)









