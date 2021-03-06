/*
 * motorControl.h
 *
 *  Created on: Jan 23, 2022
 *      Author: alexd
 */

#ifndef INC_MOTORCONTROL_H_
#define INC_MOTORCONTROL_H_

int R = 360;
int Nm = 32;
int minSecs = 60;
double dStep = 1.8;

double V;
double X;
double A;
double fstep;

void setVelocity(double V);
void setPosition(double X, double V);
void setPositionWprofile(double X, double V, double A);

#endif /* INC_MOTORCONTROL_H_ */
