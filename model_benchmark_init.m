close all;clc;

%% Initial conditions
%[travel, dtravel, elev, delev, pitch, dpitch]
% x0 = [0; 0; 0.1745; 0; -0.1047; 0];
% x0 = [0; 0; 0.1745; 0; 0; 0];
x0 = [0; 0; 0; 0; 0; 0];

%% Loading parameters of control model
cl =    model_identified.Parameters(1).Value;
bl =    model_identified.Parameters(2).Value;
ae1 =   model_identified.Parameters(3).Value;
ae2 =   model_identified.Parameters(4).Value;
ce =    model_identified.Parameters(5).Value;
be =    model_identified.Parameters(6).Value;
at =    model_identified.Parameters(7).Value;
ct =    model_identified.Parameters(8).Value;
bt =    model_identified.Parameters(9).Value;

% cl =    model_identified_custom.Parameters(1).Value;
% bl =    model_identified_custom.Parameters(2).Value;
% ae1 =   model_identified_custom.Parameters(3).Value;
% ae2 =   model_identified_custom.Parameters(4).Value;
% ce =    model_identified_custom.Parameters(5).Value;
% be =    model_identified_custom.Parameters(6).Value;
% at =    model_identified_custom.Parameters(7).Value;
% ct =    model_identified_custom.Parameters(8).Value;
% bt =    model_identified_custom.Parameters(9).Value;

%% Setting up struct with identified parameters
par_id = struct;
par_id.cl = cl;
par_id.bl = bl;
par_id.ae1 = ae1;
par_id.ae2 = ae2;
par_id.ce = ce;
par_id.be = be;
par_id.at = at;
par_id.ct = ct;
par_id.bt = bt;
          
%% Setting up struct with control parameters
% par_ctrl = struct;
% par_ctrl.Omega = diag([0.37, 1.600, 2.800]);
% par_ctrl.Xi = diag([0.5698, 1.9200, 5.400]); % default ones
% par_ctrl.Omega = diag([0.37, 1.00, 2.800]);
% par_ctrl.Xi = diag([0.57, 2.3, 5.70]);% not bad!
par_ctrl.Omega = diag([0.37, 1.1, 2.800]);
par_ctrl.Xi = diag([0.57, 2.25, 5.70]); %also not bad