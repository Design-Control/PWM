#include "PWM.h"
double t = 0;
double Tri = 0;
double PWM;
double T;
double duty_ref;
double *pwm  = &PWM;
double *tri = &Tri;
double *dutyCycle = &duty_ref;

void init(double freq, double duty)
{
	T = 1/freq;
	duty_ref = duty/100;
	double t = 0;
	double Tri = 0;
	int PWM = 0;
}

void generatingPWM(double Ts, double freq, double duty, double *PWM, double *tri, double *dutyCycle)
{
	//If the value of the triangular wave is 0 (if one PWM cycle is over), the frequency and duty of the PWM signal may be changed.
	if (*tri == 0) 
	{
		T = 1/freq;
		*dutyCycle = duty/100;
	}
	//If the triangluar wave needs to be updated (at the start of a new cycle)
	if (t >= T)
	{
		t = 0;
	}	
	//Generate the triangular wave over the entire period
	if (t < T/2)
	{
		*tri = (2/T)*t;
	} else 
	{
		*tri = (2/T)*(T-t);
	}
	//Determine the PWM signal based on the triangular wave and duty cycle
	if (*tri < *dutyCycle)
	{
		*PWM = 1;
	} else
	{
		*PWM = 0;
	}
	//increment the time by the sampling time
	t = t + Ts;
}

