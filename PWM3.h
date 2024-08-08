#ifndef __PWM_H__
#define __PWM_H__ 

#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double Ts; //sampling time rate
double freq_sine; //frequency of sine wave
double freq_ratio; //Ratio of reference triangular wave frequency to sine wave frequency
double deadtime;

void init(void);

void generatingPWM(double Ts, double freq_sine, double freq_ratio, double deadtime, double *triwave, double sinewave[], double pwm[]);


#endif