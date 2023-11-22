/*
 * EBS.cpp
 *
 *  Created on: 17-Aug-2023
 *      Author: Ishan
 */

#include "EBS.h"
#include <iostream>
using namespace std;

EBS::EBS(float elecUnits){
	units=elecUnits;
}

float EBS::amtDue(){
	if (units<=100)
		amount=units*2;
	else if (units>100 && units<=200)
		amount=units*3.5;
	else
		amount=units*4.5;

	amount=amount+0.1*amount;
	return amount;
}
