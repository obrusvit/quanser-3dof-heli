close all;

%% CasADi framework to find optimal trajectories and inputs
[t_casadi, u_casadi, x_casadi, Tf_casadi, N] = find_opt_trajectory(par_id, x_star, u_star1, u_star2);

%% Timeseries for simulation
fs_casadi_TS = timeseries(u_casadi(:,1), t_casadi);
fd_casadi_TS = timeseries(u_casadi(:,2), t_casadi);

x_casadi_TS = timeseries(x_casadi, t_casadi);


%% Plotting optimal trajectories
figure(1);
subplot(311);
plot(t_casadi, x_casadi(:,1));
hold on;
grid on;
plot(t_casadi,x_casadi(:,2));
title('Travel');
hl = legend('$\lambda$', '$\dot{\lambda}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


subplot(312);
plot(t_casadi,x_casadi(:,3));
hold on;
grid on;
plot(t_casadi,x_casadi(:,4));
title('Elevation');
hl = legend('$\epsilon$', '$\dot{\epsilon}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


subplot(313);
plot(t_casadi,x_casadi(:,5));
hold on;
grid on;
plot(t_casadi,x_casadi(:,6));
title('Pitch');
hl = legend('$\theta$', '$\dot{\theta}$');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


figure(2)
subplot(211);
plot(t_casadi(1:end),u_casadi(:,1));
hold on;
grid on;
plot(t_casadi(1:end),u_casadi(:,2));
title('Model inputs (fs, fd)');
hl = legend('u1 = fs', 'u2 = fd');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')

subplot(212);
plot(t_casadi(1:end), (u_casadi(:,1) + u_casadi(:,2))/2);
hold on;
grid on;
plot(t_casadi(1:end), (u_casadi(:,1) - u_casadi(:,2))/2);
title('Force inputs (f1, f2)')
hl = legend('f1', 'f2');
set(hl, 'Interpreter', 'latex');
set(hl, 'Location', 'Best')
xlabel('time (s)')


