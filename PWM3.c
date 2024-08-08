#include "PWM3.h"

#define NUMofPHASE 3
#define NUMofPWM 6

double ts;
double tt;

double TriWave;
double *triwave = &TriWave;

double sinewave[NUMofPHASE];

double pwm[NUMofPWM];

void init(void) //parameter initialization
{
	TriWave = 0;
	ts = 0;
	tt = 0;
	
	for (int i = 0; i < NUMofPHASE; i++) {
		sinewave[i] = 0;
	}

	for (int i = 0; i < NUMofPWM; i++) {
		pwm[i] = 0;
	}
}

void generatingTriWave(double Ts, double freq_sine, double freq_ratio, double *triWave)
{
	
}

void generatingSineWave(double Ts, double freq_sine, double sinewave[])
{
	
	
}

void generatingPWM(double Ts, double freq_sine, double freq_ratio, double deadtime, double *triwave, double sinewave[], double pwm[])
{
	double omega = 2 * M_PI * freq_sine;

	double Tsine = 1/freq_sine;

	if (ts >= Tsine) ts = 0;

	for (int i = 0; i < NUMofPHASE; i++) 
	{
		sinewave[i] = sin(omega*ts + 2 * M_PI/3 * i);
	}
	ts = ts + Ts;


	
	double freq_Tri = omega * freq_ratio; //The triangular wave frequency based on the sine wave frequency and its ratio

	double Tt = 1/freq_Tri; //the triangular wave cycle

	if (tt >= Tt) tt = 0; //Time initialization to generate triangular waves per cycle

	if (tt < Tt/2) *triwave = 4.4/Tt*tt - 1.1; //If the time is less than half of the period and the triangular wave increases
	else if (tt >= Tt/2) *triwave = -4.4/Tt*tt + 3.3; //The triangular wave is reduced because the time is greater than half of the period

	tt = tt + Ts; //Increasing time with time step

	double delta_h = 1.1 * deadtime / Tt; //Phase change of triangular wave according to dead time setting


	for (int i = 0; i < NUMofPHASE; i++) 
	{
		if (*triwave + delta_h < sinewave[i]) {
			pwm[i] = 1;
		} else if (*triwave + delta_h >= sinewave[i]) {
			pwm[i] = 0;
		}
	}

	for (int i = 0; i < NUMofPHASE; i++)
	{
		if (*triwave - delta_h < sinewave[i]) {
			pwm[i+3] = 0;
		} else if (*triwave - delta_h >= sinewave[i]) {
			pwm[i+3] = 1;
		}
	}
}

