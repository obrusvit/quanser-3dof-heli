# Quanser 3 dof helicopter laboratory model

## Task
This is semestral project for a course Optimal and Robust Control given on CTU FEE 2017/18. The goal is to implement reference tracking for the helicopter. A control requirement is to make 180 degrees steps
of travel dof in under 15 seconds. 

## Background
We heavily exploit Benchmark model introduced [here](https://hal.laas.fr/hal-01711135/document). Simscape implementation is in [github repository](https://github.com/mrkrb/3dof_helicopter_benchmark). 
We build Simulink implementation of the control model and followed the identification procedure given in the paper. 

## Control schemes
1. Tuning of the feedback linearization proposed in the Benchmar model whitepaper.
2. Optimal trajectory generation by CasADi framework (CasADi not part of this repo). 

## How to run the model
All parameters and necessary variables saved in `workspace.mat`

