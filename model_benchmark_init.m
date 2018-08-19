close all;clc;

%% Initial conditions
%[travel, dtravel, elev, delev, pitch, dpitch]
% x0 = [0; 0; 0.1745; 0; -0.1047; 0];
% x0 = [0; 0; 0.1749; 0; 0; 0];
x0 = [0; 0; 0; 0; 0; 0];

%% Loading parameters of control model
model = model_identified_MF1;

cl =    model.Parameters(1).Value;
bl =    model.Parameters(2).Value;
ae1 =   model.Parameters(3).Value;
ae2 =   model.Parameters(4).Value;
ce =    model.Parameters(5).Value;
be =    model.Parameters(6).Value;
at =    model.Parameters(7).Value;
ct =    model.Parameters(8).Value;
bt =    model.Parameters(9).Value;

%% Setting up struct with identified parameters
par_id = struct;
par_id.cl = model.Parameters(1).Value;
par_id.bl = model.Parameters(2).Value;
par_id.ae1 = model.Parameters(3).Value;
par_id.ae2 = model.Parameters(4).Value;
par_id.ce = model.Parameters(5).Value;
par_id.be = model.Parameters(6).Value;
par_id.at = model.Parameters(7).Value;
par_id.ct = model.Parameters(8).Value;
par_id.bt = model.Parameters(9).Value;
          
%% Setting up struct with control parameters
% par_ctrl = struct;
% par_ctrl.Omega = diag([0.37, 1.600, 2.800]);
% par_ctrl.Xi = diag([0.5698, 1.9200, 5.400]); % default ones
% par_ctrl.Omega = diag([0.37, 1.1, 2.800]);
% par_ctrl.Xi = diag([0.57, 2.25, 5.70]); %elev at the beginnng with MF4 gooood

% par_ctrl.Omega = diag([0.65, 1.600, 2.800]);
% par_ctrl.Xi = diag([1.25, 2.100, 5.700]); %quite fast, with MF4

% par_ctrl.Omega = diag([0.65, 1, 2.80]);
% par_ctrl.Xi = diag([0.92, 1.05, 5.38]);  %wow, MF1

% par_ctrl.Omega = diag([0.65, 1, 2.80]);
% par_ctrl.Xi = diag([0.9, 1.05, 5.45]);  %wow, MF1
 
% par_ctrl.Omega = diag([0.65, 1, 2.80]);
% par_ctrl.Xi = diag([0.9, 1.05, 5.9]);  %wow, MF1

par_ctrl.Omega = diag([0.4, 1.1, 2.8]);
par_ctrl.Xi = diag([0.47, 1.05, 5.8]); 