/*
 * EmployeeInfo.h
 *
 *  Created on: 08-Sep-2023
 *      Author: Ishan
 */

#ifndef EMPLOYEEINFO_H_
#define EMPLOYEEINFO_H_
#include <string>
#include <vector>
using namespace std;

class EmployeeInfo {
	char* name;
	//string NAME;
	char* dept;
	double salary;
	double periodOfService;

public:
	EmployeeInfo();
	EmployeeInfo(string,string,double,double);
	EmployeeInfo(EmployeeInfo &employee);
	~EmployeeInfo();
	void takeInput(string,string,double,double);
	void display();
	string getName();
};

#endif /* EMPLOYEEINFO_H_ */
