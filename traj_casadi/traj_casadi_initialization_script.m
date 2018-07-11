close all;

%% CasADi framework to find optimal trajectories and inputs
[t_star, u_star, x_star, Tf, N] = find_opt_trajectory(par.id);

%% Timeseries for simulation
fs_casadi_TS = timeseries(u_star(:,1), t_star);
fd_casadi_TS = timeseries(u_star(:,2), t_star);


%% Plotting optimal trajectories

figure('Name','Precalculated \psi and \dot{psi}','NumberTitle','off')
plot(t_star, x_star(:,1));
hold on;
grid on;
plot(t_star,x_star(:,2));
hl = legend('$\lamda$', '$\dot{\lamda}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


figure('Name','Precalculated \epsilon and \dot{epsilon}','NumberTitle','off')
plot(t_star,x_star(:,3));
hold on;
grid on;
plot(t_star,x_star(:,4));
hl = legend('$\epsilon$', '$\dot{\epsilon}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


figure('Name','Precalculated \theta and \dot{theta}','NumberTitle','off')
plot(t_star,x_star(:,5));
hold on;
grid on;
plot(t_star,x_star(:,6));
hl = legend('$\theta$', '$\dot{\theta}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')



figure('Name','Inputs ','NumberTitle','off')
plot(t_star(1:end),u_star(:,1));
hold on;
grid on;
plot(t_star(1:end),u_star(:,2));
hl = legend('u1', 'u2');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')
