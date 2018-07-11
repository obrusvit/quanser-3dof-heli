  function [dx, y] = heli_model(t, x, u, cl, bl, ae1, ae2, ce, be, at, ct, bt, varargin)

  % Output equations.
  y = [x(1);                        
       x(3);
       x(5)
      ];

  % State equations.
   
dx =        [x(2);
            -cl*x(2)-bl*cos(x(3))*sin(x(5))*u(1);
            x(4);
            -ae1*sin(x(3))-ae2*sin(x(3))*cos(x(5))-ce*x(4)+be*cos(x(5))*u(1);
            x(6);
            -at*cos(x(3))*sin(x(5))-ct*x(6)+bt*u(2)
            ];
