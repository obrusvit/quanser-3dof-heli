close all;
%% NOT NEEDED TO RUN. Computed trajectories are in the workspace

%% CasADi framework to find optimal trajectories and inputs
[t_casadi10, u_casadi10, x_casadi10, Tf_casadi10, N10] = find_opt_trajectory(par_id, x_star, u_star1, u_star2);

%% Timeseries for simulation
fs_casadi10_TS = timeseries(u_casadi10(:,1), t_casadi10);
fd_casadi10_TS = timeseries(u_casadi10(:,2), t_casadi10);

% ..
% u_star_v1 = horzcat(t_casadi(1,1:end-1)', u_casadi(:,1));
% u_star_v2 = horzcat(t_casadi(1,1:end-1)', u_casadi(:,2));

x_casadi10_TS = timeseries(x_casadi10, t_casadi10);


%% Plotting optimal trajectories
figure(1);
subplot(311);
plot(t_casadi10, x_casadi10(:,1));
hold on;
grid on;
plot(t_casadi10,x_casadi10(:,2));
title('Travel');
hl = legend('$\lambda$', '$\dot{\lambda}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


subplot(312);
plot(t_casadi10,x_casadi10(:,3));
hold on;
grid on;
plot(t_casadi10,x_casadi10(:,4));
title('Elevation');
hl = legend('$\epsilon$', '$\dot{\epsilon}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


subplot(313);
plot(t_casadi10,x_casadi10(:,5));
hold on;
grid on;
plot(t_casadi10,x_casadi10(:,6));
title('Pitch');
hl = legend('$\theta$', '$\dot{\theta}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


figure(2)
subplot(211);
plot(t_casadi10(1:end),u_casadi10(:,1));
hold on;
grid on;
plot(t_casadi10(1:end),u_casadi10(:,2));
title('Model inputs (fs, fd)');
hl = legend('u1 = fs', 'u2 = fd');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')

subplot(212);
plot(t_casadi10(1:end), (u_casadi10(:,1) + u_casadi10(:,2))/2);
hold on;
grid on;
plot(t_casadi10(1:end), (u_casadi10(:,1) - u_casadi10(:,2))/2);
title('Force inputs (f1, f2)')
hl = legend('f1', 'f2');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


