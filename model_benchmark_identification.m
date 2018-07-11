%%
FileName      = 'heli_model';       % File describing the model structure.
Order         = [3 2 6];           % Model orders [ny nu nx].
Parameters    = [0; 0; 1.1310; 0.0361; 0.0829; 0; -0.3310; 0; 0];

InitialStates = [0; 0; 0; 0; 0; 0];            % Initial initial states.
%id_outputs_ic_a
% InitialStates = [0; 0; 0.182543713758391; 0; 0.266912657092102;0]

Ts            = 0;                 % Time-continuous system.
model = idnlgrey(FileName,Order,Parameters,InitialStates);
set(model, 'InputName', {'Fs', 'Fd'}, 'InputUnit', {'-', '-'},               ...
          'OutputName', {'Travel', 'Elevation', 'Pitch'}, ...
          'OutputUnit', {'rad', 'rad', 'rad'},                         ...
          'TimeUnit', 's');
model = setinit(model, 'Maximum', {inf; inf; 0.261799; inf; pi/2; inf});
model = setinit(model, 'Minimum', {-inf; -inf; -0.261799; -inf; -pi/2; -inf});
model = setpar(model, 'Name', {'cl', 'bl', 'ae1', 'ae2', 'ce', 'be', 'at', 'ct', 'bt'});
model = setpar(model, 'Minimum', {0; -10; -10; -5; 0; -10; -10; 0; -10});
model = setpar(model, 'Maximum', {10; 10; 10; 5; 10; 10; 10; 10; 10});

% model.Parameters(3).Fixed = true;
% model.Parameters(4).Fixed = true;
    
      
 %% DATA
 %load(fullfile(matlabroot, 'toolbox', 'ident', 'iddemos', 'data', 'heli_data'));


data = iddata(id_outputs_meas3b, id_inputs_meas3b, 0.002);
data1 = iddata(id_outputs_meas3, id_inputs_meas3, 0.002);
data2 = iddata(id_outputs_meas1b, id_inputs_meas1b, 0.002);
data3 = iddata(id_outputs_meas2, id_inputs_meas2, 0.002);
data4 = iddata(id_outputs_meas1, id_inputs_meas1, 0.002);
data5 = iddata(id_outputs_meas1a, id_inputs_meas1a, 0.002);
data_ic = iddata(id_out_ic_a, id_in_ic_a, 0.002);


data.InputName = {'Fs', 'Fd'};
data.InputUnit =  {'-', '-'};
data.OutputName = {'Travel', 'Elevation', 'Pitch'};
data.OutputUnit = {'rad', 'rad', 'rad'};
data.Tstart = 0;
data.TimeUnit = 's';


%% Estimate parameters
opt = nlgreyestOptions;
opt.Display = 'on';
opt.SearchOption.MaxIter = 10;

%model_identified = nlgreyest(data,model,opt);

%model_identified_pem = pem (data, model);
 
%% Compare results
compare(data, model_identified);
%compare(data, model_identified_pem);

 