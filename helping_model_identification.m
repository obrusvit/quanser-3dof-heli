%%
FileName      = 'heli_model';       % File describing the model structure.
Order         = [3 2 6];           % Model orders [ny nu nx].
%Parameters    = [0; 0; 1.1310; 0.0361; 0.0829; 0; -0.3310; 0; 0];
%Parameters    = [0.2025; 0; 1.3623; -0.3787; 0.0447; 0; -0.4638; 0.0076; 0];
% Parameters    = [0; 0; 1.1310; 0; 0.0829; 0; 0; 0; 0];
Parameters = [2.66539506373956e-07; 0.181162986000263; 0.897774292800465; 0.262149659708340; 0.0422113991393604; 0.247103079580339; 0.0299387993613542; 0.0371585044068749; 2.32610751155522];

InitialStates = [0; 0; 0; 0; 0; 0];            % Initial initial states.

%id_outputs_ic_a
% InitialStates = [0; 0; 0.182543713758391; 0; 0.266912657092102;0]

%id_outputs_elev10b
% InitialStates = [0; 0; 0.1749; 0; 0; 0];            


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

% data = iddata(id_outputs, id_inputs, 0.002);
data = iddata(id_outputs, id_inputs, 0.002);


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

% model_identified_MF1 = nlgreyest(data,model,opt);
model_identified_MF4 = nlgreyest(data, model, opt);

% model_identified_elev10 = pem(data, model);
 
%% Compare results
% compare(data, model);
% compare(data_MF1, model);
compare(data, model_identified_MF4);

 