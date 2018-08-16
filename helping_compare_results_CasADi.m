function helping_compare_results(TM)
%% Compare simulated values with real experimental values
% function takes TM_x as argument
close all;
t = (0:size(TM.x_des(:,1))-1)*0.002;

%% Inputs
%%
figure(1);
subplot(211);
plot(t, scaled_force_2_voltage_new(TM.voltages_sim(:,1)), 'linewidth', 2);
hold on;
plot(t, TM.voltages_real(:,1));
legend('f1 sim', 'f1 real');

%%
subplot(212);
plot(t, scaled_force_2_voltage_new(TM.voltages_sim(:,2)), 'linewidth', 2);
hold on;
plot(t, TM.voltages_real(:,2));
legend('f1 sim', 'f1 real');


%% states
figure(2);
title('Experimental results in closed loop');
subplot(3,1,1)
plot(t, hf(TM.x_des(:,1)), 'k-.');
hold on;
plot(t, hf(TM.x_real(:,1)), 'linewidth', 2);
legend('desired', 'real')
xlabel('t [s]');
ylabel('\lambda - travel [\circ]','FontSize',16);

subplot(3,1,2)
plot(t, hf(TM.x_des(:,2)), 'k-.');
hold on;
plot(t, hf(TM.x_real(:,3)), 'linewidth', 2);
legend('desired', 'real')
xlabel('t [s]');
ylabel('\epsilon - elevation [\circ]', 'FontSize',16);

subplot(3,1,3)
plot(t, hf(TM.x_des(:,3)), 'k-.');
hold on;
plot(t, hf(TM.x_real(:,5)), 'linewidth', 2);
legend('desired', 'real')
xlabel('t [s]');
ylabel('\theta - pitch [\circ]', 'FontSize',16);

    function res = hf(u)
        res = rad2deg(u);
    end


end

