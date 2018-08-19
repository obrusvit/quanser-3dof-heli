%% Elev initial conditions
figure(1);
title('Elevation initial condition');
plot(data_elev10c_meas(:,1), hf(data_elev10c_sim), 'linewidth', 2);
hold on;
plot(data_elev10c_meas(:,1), hf(data_elev10c_meas(:,2)), 'linewidth', 2);
xlabel('t [s]');
ylabel('\epsilon - elevation [\circ]', 'FontSize',16);
legend('simulated', 'real');
grid on


%% Elev with input
figure(2);
subplot(211);
plot(fs_elev_MF0_TS.Time, data_MF0.InputData(1:12001,1), 'color', 'g', 'linewidth', 1.5);
% hold on;
% plot(fs_elev_MF0_TS.Time, data_MF0.InputData(1:12001,2));
axis([0 24 0 1]);
legend({'$\tilde{f_s}$'}, 'interpreter', 'latex');
ylabel({'$\tilde{f_s}$ [-]'}, 'interpreter', 'latex', 'FontSize', 14);
xlabel('t [s]');
grid on;


subplot(212);
plot(fs_elev_MF0_TS.Time, hf(data_elev_MF0_sim), 'linewidth', 2);
hold on;
plot(fs_elev_MF0_TS.Time, hf(data_MF0.OutputData(1:12001, 2)), 'linewidth', 2)
xlabel('t [s]');
ylabel('\epsilon - elevation [\circ]', 'FontSize',12);
legend('simulated', 'real');
axis([0 24 -20 30]);

grid on;

    function res = hf(u)
        res = rad2deg(u);
    end