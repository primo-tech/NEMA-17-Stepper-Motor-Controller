/*
 * motorControl.c
 *
 *  Created on: Jan 23, 2022
 *      Author: alexd
 */

#include "motorControl.h"

#include "stm32l0xx_hal.h"
#include "main.h"


int R = 360;
int Nm = 32;
int minSecs = 60;
double dStep = 1.8;

double gain = 1000000/((R*Nm)/(minSecs*dStep));
double V;
double X;
double A;

void setVelocity(double V)
{
	TIM2->ARR = (uint32_t *) gain/V;
}

void setPosition(double X, double V, uint32_t ticks)
{
	uint32_t t = (uint32_t *) X/V;

	if(ticks < t)
	{
		TIM2->ARR = (uint32_t *) gain/V;
	}
	else
	{
		TIM2->ARR = 0;
	}
}

void setPositionWprofile(double X, double V, double A, uint32_t ticks)
{
	uint32_t t1 = (uint32_t *) (X/V)/3, t2 = (uint32_t *) 2*(X/V)/3, t3 = (uint32_t *) X/V;
	uint32_t v;

	if(ticks > t0 && ticks < t1)
	{
		v = A*ticks + u;
	}
	if(ticks > t1 && ticks < t2)
	{
		v = (uint32_t *) V;
	}
	if(ticks > t2 && ticks < t3)
	{
		v = A*ticks + u;
	}
	TIM2->ARR = (uint32_t *)gain/v;
}



