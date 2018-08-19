function [ v_i ] = scaled_force_2_voltage_new( f_tilde, par_force )
% Only fitted by 2nd degree polynomial, which seems to be OK in cftool

% p_p = par_force.par_pos;
% p_n = par_force.par_neg;
p_p = 0.002541000000000;
p_n = -9.750000000000000e-04;

v_i = zeros(size(f_tilde));

for i = 1:length(f_tilde)
    if f_tilde(i) >= 0    
         v_i(i) = sqrt(f_tilde(i) / p_p);
    else
         v_i(i) = -sqrt(f_tilde(i) / p_n);
    end
end

v_i = v_i /2;
end



