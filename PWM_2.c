#include "PWM_2.h"
double t = 0;
double Tri = 0;
double T;
double PWM[4] = {0};
double duty_ref[2] = {0};

void init(double freq, double duty)
{
	T = 1/freq;
	duty_ref[0] = duty/100;
	duty_ref[1] = -duty/100;
	double t = 0;
	double Tri = 0;
	PWM[1] = 0;
	PWM[2] = 1;
}

void generatingPWM(double Ts, double freq, double duty, double *Tri, double duty_ref[], double PWM[])
{

	T = 1/freq;
	duty_ref[0] = duty/100;
	duty_ref[1] = (-duty/100) ;

	//If the triangluar wave needs to be updated (at the start of a new cycle)
	if (t >= T)
	{
		t = 0;
	}	
	//Generate the triangular wave over the entire period
	if (t < T/2)
	{
		*Tri = 1.1 * (2/T)*t - 0.55; //0에서 0.55까지
	} else 
	{
		*Tri = 1.1 * (2/T)*(T-t) - 0.55; //
	}
	//Determine the first PWM signals based on the triangular wave (+0.01 for the deadtime) and a sine wave
	if (*Tri + 0.01 < duty_ref[0])
	{
		PWM[0] = 1;
	} else
	{
		PWM[0] = 0;
	}
	//Determine the first PWM signals based on the triangular wave (-0.01 for the deadtime) and inverted sine wave
	if (*Tri - 0.01 < duty_ref[0])
	{
		PWM[2] = 0;
	} else
	{
		PWM[2] = 1;
	}
	//Determine the second PWM signals based on the triangular wave (+0.01 for the deadtime) and a sine wave
	if (*Tri + 0.01 < duty_ref[1])
	{
		PWM[1] = 1;
	} else
	{
		PWM[1] = 0;
	}
	//Determine the second PWM signals based on the triangular wave (-0.01 for the deadtime) and inverted sine wave
	if (*Tri - 0.01 < duty_ref[1])
	{
		PWM[3] = 0;
	} else
	{
		PWM[3] = 1;
	}
	//Time step
	t = t + Ts;
}

