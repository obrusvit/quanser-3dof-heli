function [ f_i ] = voltage_2_scaled_force( v_s, p, thresholds )

%TODO define thresholds for this func
f_tilde = zeros(size(v_s));
for i = 1:length(f_tilde)
    if(v_s(i) >= 0)
        if(v_s(i) >= i_threshold)
            f_tilde(i) = p(1,2)*v_s(i) + p(1,3);
        else 
            f_tilde(i) = p(1,1)*v_s(i)^2;
        end
    else
        if(v_s(i) <= i_threshold_2)
            f_tilde(i) = p(2,2)*v_s(i) + p(2,3);
        else
            f_tilde(i) = p(2,1)*v_s(i)^2;
        end
    end
end

f_i = f_tilde/2;



