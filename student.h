/*
 * student.h
 *
 *  Created on: 25-Aug-2023
 *      Author: Ishan
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;

class student {
protected:
	string name;
	int math;
	int physics;
	int biology;
public:
	void addData(string,int,int,int);
	void showData();

};

#endif /* STUDENT_H_ */
