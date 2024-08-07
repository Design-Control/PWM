clear; clc; close all;

Ts = 0.000001; %sampling time for the simulation 
T_end = 0.1; %ending time for the simulation 

sim("PWM_2.slx");

plot(ans.tout, ans.PWM);