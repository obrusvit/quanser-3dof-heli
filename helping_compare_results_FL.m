function helping_compare_results(TM)
%% Compare simulated values with real experimental values
% function takes TM_x as argument
close all;
t = (0:size(TM.x_des(:,1))-1)*0.002;

%% Inputs
figure(1);
subplot(211)
plot(t, TM.voltages_sim(:,1),'linewidth',2);
hold on;
plot(t, TM.voltages_real(:,1));
legend('sim', 'real', 'location', 'nw');
xlabel('t[s]');
ylabel('v_1[V]');

subplot(212)
plot(t, TM.voltages_sim(:,2), 'linewidth', 2);
hold on;
plot(t, TM.voltages_real(:,2));
% legend('sim', 'real');
xlabel('t[s]');
ylabel('v_2[V]');

%%
% figure(2);
% subplot(211);
% plot(t, TM.forces_sim(:,1), 'linewidth', 2);
% hold on;
% plot(t, TM.forces_real(:,1));
% legend('f1 sim', 'f1 real');
% 
% %%
% subplot(212);
% plot(t, TM.forces_sim(:,2), 'linewidth', 2);
% hold on;
% plot(t, TM.forces_real(:,2));
% legend('f1 sim', 'f1 real');


%% states
figure(3);
title('Experimental and simulation results in closed loop');
subplot(3,1,1)
plot(t, hf(TM.x_des(:,1)), 'k-.');
hold on;
plot(t, hf(TM.x_sim(:,1)), 'linewidth', 2);
plot(t, hf(TM.x_real(:,1)), 'linewidth', 2, 'color', '0.8500    0.3250    0.0980');
legend('desired', 'simulated', 'real', 'location', 'nw')
xlabel('t [s]');
ylabel('\lambda - travel [\circ]','FontSize',12);

subplot(3,1,2)
plot(t, hf(TM.x_des(:,2)), 'k-.');
hold on;
plot(t, hf(TM.x_sim(:,2)), 'linewidth', 2);
plot(t, hf(TM.x_real(:,2)), 'linewidth', 2);
% legend('desired', 'simulated', 'real')
xlabel('t [s]');
ylabel('\epsilon - elevation [\circ]', 'FontSize',12);

subplot(3,1,3)
plot(t, hf(TM.theta_ref_sim), 'k-.');
hold on;
% plot(t, hf(TM.x_des(:,3)), 'k-');
% hold on;
plot(t, hf(TM.x_sim(:,3)), 'linewidth', 2);
plot(t, hf(TM.x_real(:,3)), 'linewidth', 2);
% legend('desired', 'simulated', 'real')
xlabel('t [s]');
ylabel('\theta - pitch [\circ]', 'FontSize',12);

    function res = hf(u)
        res = rad2deg(u);
    end


end

