%%
FileName      = 'heli_model';       % File describing the model structure.
Order         = [3 2 6];           % Model orders [ny nu nx].
%Parameters    = [0; 0; 1.1310; 0.0361; 0.0829; 0; -0.3310; 0; 0];
%Parameters    = [0.2025; 0; 1.3623; -0.3787; 0.0447; 0; -0.4638; 0.0076; 0];
Parameters    = [0; 0; 1.1310; 0; 0.01; 0; 0; 0; 0];


% InitialStates = [0; 0; 0; 0; 0; 0];            % Initial initial states.

%id_outputs_ic_a
% InitialStates = [0; 0; 0.182543713758391; 0; 0.266912657092102;0]

%id_outputs_elev10b
InitialStates = [0; 0; 0.1749; 0; 0; 0];            

Ts            = 0;                 % Time-continuous system.
model = idnlgrey(FileName,Order,Parameters,InitialStates);
set(model, 'InputName', {'Fs', 'Fd'}, 'InputUnit', {'-', '-'},               ...
          'OutputName', {'Travel', 'Elevation', 'Pitch'}, ...
          'OutputUnit', {'rad', 'rad', 'rad'},                         ...
          'TimeUnit', 's');
model = setinit(model, 'Maximum', {inf; inf; 0.4; inf; pi/2; inf}); %0.261799rad = 15deg, for elev
model = setinit(model, 'Minimum', {-inf; -inf; -0.4; -inf; -pi/2; -inf});
model = setpar(model, 'Name', {'cl', 'bl', 'ae1', 'ae2', 'ce', 'be', 'at', 'ct', 'bt'});
model = setpar(model, 'Minimum', {0; -10; -10; -5; 0; -10; -10; 0; -10});
model = setpar(model, 'Maximum', {10; 10; 10; 5; 10; 10; 10; 10; 10});

% model.Parameters(1).Fixed = true;
% model.Parameters(3).Fixed = true;
% model.Parameters(4).Fixed = true;
% model.Parameters(5).Fixed = true;
% model.Parameters(7).Fixed = true;
% model.Parameters(8).Fixed = true;
    
      
 %% DATA
 %load(fullfile(matlabroot, 'toolbox', 'ident', 'iddemos', 'data', 'heli_data'));

%data = iddata(id_outputs_meas3b, id_inputs_meas3b, 0.002);
% data1 = iddata(id_outputs_meas3, id_inputs_meas3, 0.002);
% data2 = iddata(id_outputs_meas1b, id_inputs_meas1b, 0.002);
% data3 = iddata(id_outputs_meas2, id_inputs_meas2, 0.002);
% data4 = iddata(id_outputs_meas1, id_inputs_meas1, 0.002);
% data5 = iddata(id_outputs_meas1a, id_inputs_meas1a, 0.002);
% data_ic = iddata(id_out_ic_a, id_in_ic_a, 0.002);

% Test measurement during successful pi-travel
% forces_real are divided by 2.35 to scale them to interval <-0.4, 1>
% taken only points 5000+ because at the beginning was my mess
% tm_5_out = TM_5.x_real(5000:end,1:3);
% tm_5_in = [TM_5.forces_real(5000:end,1)/2.35 + TM_5.forces_real(5000:end,2)/2.35 TM_5.forces_real(5000:end,1)/2.35 - TM_5.forces_real(5000:end,2)/2.35];
% data = iddata(tm_5_out, tm_5_in, 0.002);

data = iddata(id_outputs_elev10b, id_inputs_elev10b, 0.002);


data.InputName = {'Fs', 'Fd'};
data.InputUnit =  {'-', '-'};
data.OutputName = {'Travel', 'Elevation', 'Pitch'};
data.OutputUnit = {'rad', 'rad', 'rad'};
data.Tstart = 0;
data.TimeUnit = 's';


%% Estimate parameters
opt = nlgreyestOptions;
opt.Display = 'on';
opt.SearchOption.MaxIter = 40;

model_identified_elev10 = nlgreyest(data,model,opt);

% model_identified_elev10 = pem(data, model);
 
%% Compare results
compare(data, model_identified_elev10);
%compare(data, model_identified_pem);

 