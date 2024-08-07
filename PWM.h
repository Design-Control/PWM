#ifndef __PWM_H__
#define __PWM_H__ 

#include <stdio.h>
#include <math.h>

double Ts;
double freq;
double duty;

void generatingPWM(double Ts, double freq, double duty, double *PWM, double *tri, double *dutyCycle);


#endif