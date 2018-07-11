function dx = ODE_helicopter(x, u, a1, a2, a3, a4, a5, a6, a7, a8)
% x(1) - psi
% x(2) - Dpsi
% x(3) - theta
% x(4) - Dtheta
% x(5) - phi
% x(6) - Dphi
%


dx = [x(2);
      a1*cos(x(1))+a2*cos(x(1))+a3*x(2)+a4*cos(x(3))*u(1)
      x(4)
      a5*x(4)+a6*u(2)
      x(6)
      a7*x(6)+a8*sin(x(3))*u(1)];

end