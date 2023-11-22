/*
 * ThemePark.h
 *
 *  Created on: 17-Aug-2023
 *      Author: Ishan
 */

#ifndef THEMEPARK_H_
#define THEMEPARK_H_

#include <vector>
using namespace std;

class ThemePark {
private:
	int numPersons;
	int hours;
	char swing;
	vector<int> age;
	int totalCost=0;
	int one2five=0;
	int five2ten=0;
	int ten2fifteen=0;
	int fifteen2twenty=0;
	int boomers=0;
	int parkingRate=10;

public:
	ThemePark();
	void setAge();
	void setHours();
	void setNumPersons();
	void setSwing();
	int calculateTotalCost();
};

#endif /* THEMEPARK_H_ */
