/*
 * Rainfall.cpp
 *
 *  Created on: 17-Aug-2023
 *      Author: Ishan
 */

#include "Rainfall.h"
#include <iostream>
#include <vector>
using namespace std;

Rainfall::Rainfall(int yr){
	year=yr;
	float tempSum=0;
	float tempMin=999999;
	float tempMax=0;
	float tempInput;
	cout<<"Enter the rainfall measure month-wise -------- ";

	for (int i=0;i<12;i++){
		cout<<"Month "<<i+1<<" : ";
		cin>>tempInput;
		if (tempInput>tempMax)
			tempMax=tempInput;
		if (tempInput<tempMin)
			tempMin=tempInput;
		rainIndex[i]=tempInput;
		tempSum=tempSum+tempInput;

	}
	sum=tempSum;
	max=tempMax;
	min=tempMin;
}

void Rainfall::displayMonthly(){
	for (int i=0;i<12;i++){
		cout<<"Month "<<i+1<<" : "<<rainIndex[i]<<endl;
	}
}

float Rainfall::displayTotal(){
	return sum;
}

float Rainfall::displayAverage(){
	return (sum/12.0);
}

float Rainfall::displayHigh(){
	return max;
}

float Rainfall::displayLow(){
	return min;
}


