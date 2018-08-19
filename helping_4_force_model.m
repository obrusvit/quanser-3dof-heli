vs_p = [0; 2; 3; 3.4; 3.8; 4; 4.4; 4.8; 5.2; 5.6; 6; 6.4; 6.8; 7.2; 7.6; 8; 8.4; 8.8; 9.2; 9.6; 10; 10.4; 10.8; 11; 11.2; 11.6; 12; 12.4; 12.8; 13.2; 13.6; 14; 14.4; 14.8; 15; 15.2; 15.6; 16; 16.4; 16.8; 17; 17.2; 17.6; 18; 18.4; 18.8; 19; 19.2; 19.6; 20];
eps_p = [0; 0.002; 0.006; 0.008; 0.015; 0.016; 0.021; 0.024; 0.031; 0.036; 0.044; 0.05; 0.056; 0.064; 0.075; 0.08; 0.088; 0.10; 0.11; 0.12; 0.128; 0.134; 0.142; 0.152; 0.16; 0.1725; 0.1875; 0.2025; 0.2275; 0.235; 0.2525; 0.2626; 0.286; 0.301; 0.317; 0.3225; 0.340; 0.3515; 0.362; 0.3775; 0.385; 0.3925; 0.397; 0.405; 0.435; 0.488; 0.5; 0.515; 0.528; 0.54];
sin_eps_p = sin(eps_p);

vs_n = [-20; -14; -13; -12; -11; -10.8; -10.4; -10; -5.6; -4;  -2];
eps_n = [-0.177; -0.1175; -0.09; -0.085; -0.07; -0.062; -0.061; -0.06; -0.018; -0.01; -0.005];
sin_eps_n = sin(eps_n);

vs_tot = [vs_n; vs_p];
sin_eps_tot = [sin_eps_n; sin_eps_p];
sin_eps_tot_scaled = sin_eps_tot/sin_eps_tot(end);


plot(vs_tot, sin_eps_tot_scaled);


%% Plotting for report
plot(vs_tot(12:end), sin_eps_tot_scaled(12:end), 'k+');
hold on;
plot(vs_tot(1:12), sin_eps_tot_scaled(1:12), 'k+');

plot(vs_tot(12:end), 0.002541*vs_tot(12:end).^2, 'r--', 'linewidth', 1);
plot(vs_tot(1:12)  , -0.000975*vs_tot(1:12).^2, 'r--', 'linewidth', 1);
axis([-20 20 -0.4 1]);
grid on;

xlabel('v_s[V]');
ylabel('$\tilde{f_s}$[-]', 'Interpreter', 'latex', 'FontSize', 18)

text(-18, 0.85, '+', 'Color', 'black', 'FontSize', 14);
text(-14, 0.85, 'measured samples', 'Color', 'black', 'FontSize', 12);

text(-18, 0.75, '----', 'Color', 'red', 'FontSize', 14);
text(-14, 0.75, 'fit', 'Color', 'red', 'FontSize', 12);