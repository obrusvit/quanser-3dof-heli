function [ v_i ] = scaled_force_2_voltage_new( f_tilde )
% Only fitted by 2nd degree polynomial, which seems to be OK in cftool
p_p = 0.002541; 
p_n = -0.00975;

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



