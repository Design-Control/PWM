#ifndef __PWM_H__
#define __PWM_H__ 

#include <stdio.h>
#include <math.h>

double Ts;
double freq;
double duty;

void generatingPWM(double Ts, double freq, double duty, double *Tri, double duty_ref[], double PWM[]);


#endif