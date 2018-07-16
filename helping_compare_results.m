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
subplot(3,1,1)
plot(t, TM.x_des(:,1), t, TM.x_sim(:,1), t, TM.x_real(:,1));
legend('\lambda des', '\lambda sim', '\lambda real')
subplot(3,1,2)
plot(t, TM.x_des(:,2), t, TM.x_sim(:,2), t, TM.x_real(:,2));
legend('\epsilon des', '\epsilon sim', '\epsilon real')
subplot(3,1,3)
plot(t, TM.x_des(:,3), t, TM.x_sim(:,3), t, TM.x_real(:,3), t, TM.theta_ref_sim);
legend('\theta des real', '\theta sim', '\theta real', '\theta des sim')

end

