function dx = helicopter_ode(x, u, cl, bl, ae1, ae2, ce, be, at, ct, bt)
% x(1) - lambda
% x(2) - Dlambda
% x(3) - elev
% x(4) - Delev
% x(5) - theta
% x(6) - Dtheta
%


dx = [x(2);
      -cl*x(2)-bl*cos(x(3))*sin(x(5))*u(1);
      x(4)
      -ae1*sin(x(3))-ae2*sin(x(3))*cos(x(5))-ce*x(4)+be*cos(x(5))*u(1)
      x(6)
      -at*cos(x(3))*sin(x(5))-ct*x(4)+bt*u(2)];

end