%% TRAIN
figure(1);
subplot(411)
title('Training measurement');
t = [0:0.002:14];
bound = numel(t);
plot(t, (data_MF1.InputData(1:bound, 1) + data_MF1.InputData(1:bound, 2))/2, 'color', 'm');
hold on;
plot(t, (data_MF1.InputData(1:bound, 1) - data_MF1.InputData(1:bound, 2))/2, 'color', 'k');
xlabel('t [s]');
ylabel('$\tilde{f_1}$, $\tilde{f_2}$', 'FontSize',12, 'interpreter', 'latex');
legend({'$\tilde{f_1}$', '$\tilde{f_2}$'}, 'location', 'nw', 'interpreter', 'latex');
axis([0 14 0 1]);
grid on

subplot(412);
plot(t, hf(data_MF1_model_response.OutputData(1:bound, 1)), 'linewidth', 1.5);
hold on;
plot(t, hf(data_MF1.OutputData(1:bound, 1)), 'linewidth', 1.5);
xlabel('t [s]');
ylabel('\lambda - travel[\circ]','FontSize',8);
legend('sim','real', 'location', 'sw');
grid on;

subplot(413);
plot(t, hf(data_MF1_model_response.OutputData(1:bound, 2)), 'linewidth', 1.5);
hold on;
plot(t, hf(data_MF1.OutputData(1:bound, 2)), 'linewidth', 1.5);
xlabel('t [s]');
ylabel('\epsilon - elevation [\circ]','FontSize',8);
grid on;

subplot(414);
plot(t, hf(data_MF1_model_response.OutputData(1:bound, 3)), 'linewidth', 1.5);
hold on;
plot(t, hf(data_MF1.OutputData(1:bound, 3)), 'linewidth', 1.5);
xlabel('t [s]');
ylabel('\theta - pitch [\circ]','FontSize',8);
grid on;



%% TEST
figure(2);
title('Testing measurement');
subplot(411);
t = [0:0.002:11.4];
bound = numel(t);
plot(t, (data_MF4.InputData(1:bound, 1) + data_MF4.InputData(1:bound, 2))/2, 'color', 'm');
hold on;
plot(t, (data_MF4.InputData(1:bound, 1) - data_MF4.InputData(1:bound, 2))/2, 'color', 'k');
xlabel('t [s]');
ylabel('$\tilde{f_1}$, $\tilde{f_2}$', 'FontSize',12, 'interpreter', 'latex');
legend({'$\tilde{f_1}$', '$\tilde{f_2}$'}, 'location', 'nw', 'interpreter', 'latex');
axis([0 11.4 0 1]);
grid on

subplot(412);
plot(t, hf(data_MF4_model_response.OutputData(1:bound, 1)), 'linewidth', 1.5);
hold on;
plot(t, hf(data_MF4.OutputData(1:bound, 1)), 'linewidth', 1.5);
xlabel('t [s]');
ylabel('\lambda - travel [\circ]','FontSize',8);
legend('sim','real', 'location', 'sw');
axis([0 11.4 0 200]);
grid on;

subplot(413);
plot(t, hf(data_MF4_model_response.OutputData(1:bound, 2)), 'linewidth', 1.5);
hold on;
plot(t, hf(data_MF4.OutputData(1:bound, 2)), 'linewidth', 1.5);
xlabel('t [s]');
ylabel('\epsilon - elevation [\circ]','FontSize',8);
axis([0 11.4 -20 20]);
grid on;

subplot(414);
plot(t, hf(data_MF4_model_response.OutputData(1:bound, 3)), 'linewidth', 1.5);
hold on;
plot(t, hf(data_MF4.OutputData(1:bound, 3)), 'linewidth', 1.5);
xlabel('t [s]');
ylabel('\theta - pitch [\circ]','FontSize',8);
axis([0 11.4 -120 120]);
grid on;



    function res = hf(u)
        res = rad2deg(u);
    end