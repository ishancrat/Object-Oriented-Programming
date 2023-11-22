/*
 * Rainfall.h
 *
 *  Created on: 17-Aug-2023
 *      Author: Ishan
 */

#ifndef RAINFALL_H_
#define RAINFALL_H_
#include <vector>

class Rainfall {
private:
	int year;
	float rainIndex[12];
	float sum;
	float max;
	float min;
public:
	Rainfall(int yr);
	void displayMonthly();
	float displayTotal();
	float displayAverage();
	float displayHigh();
	float displayLow();
};

#endif /* RAINFALL_H_ */
