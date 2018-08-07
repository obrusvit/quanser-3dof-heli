close all
%% Precalculated trajectory and input
% time vector - t_star, controls - u_star, state - x_star
%load('opt_trajectory_for8sec.mat')


subplot(3,1,1)
plot(t_star,x_star(:,1));
hold on;
grid on;
plot(t_star,x_star(:,2));
hl = legend('$Travel$', '$Dtravel$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')
title('Precalculated travel and Dtravel');


subplot(3,1,2)
plot(t_star,x_star(:,3));
hold on;
grid on;
plot(t_star,x_star(:,4));
hl = legend('elev', 'Delev');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')
title('Precalculated elev and Delev');

subplot(3,1,3)
plot(t_star,x_star(:,5));
hold on;
grid on;
plot(t_star,x_star(:,6));
hl = legend('$\theta$', '$\dot{\theta}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')
title('Precalculated theta and Dtheta');


figure('Name','Inputs ','NumberTitle','off')
plot(t_star,u_star(:,1));
hold on;
grid on;
plot(t_star,u_star(:,2));
hl = legend('u1', 'u2');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


%% Stabilization

% Weight matrices
Q = diag([100 100 100 100 100 100]); % state
R = eye(2); % control


% Linearization around the optimal trajectory
% x := [travel; Dtravel; elev; Delev; theta; Dtheta]
A = zeros(6, 6, numel(t_star));
B = zeros(6, 2, numel(t_star));

for i=1:numel(t_star)
    % your code goes here
    
    A(1,2,i)= 1;
    A(2,2,i)=-cl; %To 2
    A(2,3,i)=bl*sin(x_star(i,3))*sin(x_star(i,5))*u_star(i,1); % to 3
    A(2,5,i)=-bl*cos(x_star(i,3))*cos(x_star(i,5))*u_star(i,1);
    A(3,4,i)=1;
    A(4,3,i)=-ae1*cos(x_star(i,3))-ae2*cos(x_star(i,3))*cos(x_star(i,5));
    A(4,4,i)=-ce; % to 4
    A(4,5,i)=ae2*sin(x_star(i,3))*sin(x_star(i,5))-be*sin(x_star(i,5))*u_star(i,1);% to 5   
    A(5,6,i)=1;
    A(6,3,i)=at*sin(x_star(i,3))*sin(x_star(i,5));
    A(6,5,i)=-at*cos(x_star(i,3))*cos(x_star(i,5));
    A(6,6,i)=-ct;
    
    
    
    B(2,1,i)=-bl*cos(x_star(i,3))*sin(x_star(i,5));
    B(4,1,i)=be*cos(x_star(i,5));
    B(6,2,i)=bt;
    
    
    
end

% Design a LQR stabilizying the trajectory
S = zeros(6, 6, numel(t_star));
K = zeros(2, 6, numel(t_star));


S(:,:, end) = Q;
K(:,:, end) = R\B(:,:, end)'*S(:,:, end);


for i = (numel(t_star) - 1):-1:1
    % your code goes here     
    K(:,:,i) = (B(:,:,i)'*S(:,:,i+1)*B(:,:,i)+R)^(-1)*B(:,:,i)'*S(:,:,i+1)*A(:,:,i);
    S(:,:,i) = A(:,:,i)'*S(:,:,i+1)*(A(:,:,i)-B(:,:,i)*K(:,:,i))+Q;
end



K= permute(-squeeze(K),[2,1,3]);


x0 = [0;0;0;0;0;0];

K_TS = timeseries(K, t_star);
x_star_TS = timeseries(x_star, t_star);
u_star_TS = timeseries(u_star, t_star);










