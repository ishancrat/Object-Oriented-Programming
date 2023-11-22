/*
 * ThemePark.cpp
 *
 *  Created on: 17-Aug-2023
 *      Author: Ishan
 */

#include "ThemePark.h"
#include <iostream>
#include <vector>
using namespace std;

ThemePark::ThemePark(){}

void ThemePark::setNumPersons(){
	int NUM;
	cout<<"Enter number of persons : ";
	cin>>NUM;
	numPersons=NUM;
}

void ThemePark::setAge(){
	int AGE;
	cout<<"Enter age separated by white-spaces : ";
	for (int i=0;i<numPersons;i++){
		cin>>AGE;
		if (AGE<=5)
			one2five++;
		else if (AGE>5 && AGE<=10)
			five2ten++;
		else if (AGE>10 && AGE<=15)
			ten2fifteen++;
		else if (AGE>15 && AGE<=20)
			fifteen2twenty++;
		else
			;
		age.push_back(AGE);
	}
}

void ThemePark::setHours(){
	int HRS;
	cout<<"Enter the number of hours you intend to spend : ";
	cin>>HRS;
	hours=HRS;
}

void ThemePark::setSwing(){
	char tempChar;
	cout<<"Which swing would you choose (D/M) : ";
	cin>>tempChar;
	swing=tempChar;
}

int ThemePark::calculateTotalCost(){
	totalCost=totalCost+hours*parkingRate;
	boomers=numPersons-one2five-five2ten-ten2fifteen-fifteen2twenty;
	if (swing=='D'){
		totalCost=totalCost + boomers*100 + ten2fifteen*90 + fifteen2twenty*95;

	}
	else{
		totalCost=totalCost + boomers*100 + (int)one2five*50 + (int)five2ten*75 + 100*(ten2fifteen + fifteen2twenty);
	}

	return totalCost;

}


