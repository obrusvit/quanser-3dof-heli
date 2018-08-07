function helping_compare_results(TM)
%% Compare simulated values with real experimental values
% function takes TM_x as argument
close all;
t = (0:size(TM.x_des(:,1))-1)*0.002;

%% Inputs
figure(1);
plot(t, TM.voltages_sim(:,1), t, TM.voltages_sim(:,2));
hold on;
plot(t, TM.voltages_real(:,1), t, TM.voltages_real(:,2));
legend('v_1 sim', 'v_2 sim', 'v_1 real', 'v_2 real');
xlabel('t[s]');
ylabel('v[V]');

%%
figure(2);
plot(t, TM.forces_sim(:,1), 'linewidth', 2);
hold on;
plot(t, TM.forces_real(:,1));

%% states
figure(3);
title('Experimental and simulation results in closed loop');
subplot(3,1,1)
plot(t, hf(TM.x_des(:,1)), 'k-.');
hold on;
plot(t, hf(TM.x_sim(:,1)), 'linewidth', 2);
plot(t, hf(TM.x_real(:,1)), 'linewidth', 2);
legend('desired', 'simulated', 'real')
xlabel('t [s]');
ylabel('\lambda deg [\circ]','FontSize',12);

subplot(3,1,2)
plot(t, hf(TM.x_des(:,2)), 'k-.');
hold on;
plot(t, hf(TM.x_sim(:,2)), 'linewidth', 2);
plot(t, hf(TM.x_real(:,2)), 'linewidth', 2);
legend('desired', 'simulated', 'real')
xlabel('t [s]');
ylabel('\epsilon deg [\circ]', 'FontSize',12);

subplot(3,1,3)
plot(t, hf(TM.theta_ref_sim), 'k-.');
hold on;
% plot(t, TM.x_des(:,3), 'k-');
% hold on;
plot(t, hf(TM.x_sim(:,3)), 'linewidth', 2);
plot(t, hf(TM.x_real(:,3)), 'linewidth', 2);
legend('desired', 'simulated', 'real')
xlabel('t [s]');
ylabel('\theta deg [\circ]', 'FontSize',12);

    function res = hf(u)
        res = rad2deg(u);
    end


end

