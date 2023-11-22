/*
 * EmployeeInfo.cpp
 *
 *  Created on: 08-Sep-2023
 *      Author: Ishan
 */

#include "EmployeeInfo.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

EmployeeInfo::EmployeeInfo(){
	name = new char[50];
	string tempName="filler";
	string tempDept="filler";
	strcpy(name, tempName.c_str());
	dept = new char[100];
	strcpy(dept, tempDept.c_str());
	salary = 55000;
	periodOfService = 0;
}

EmployeeInfo::EmployeeInfo(string NAME,string DEPT,double SALARY, double POS){
	name = new char[50];
	strcpy(name, NAME.c_str());
	dept = new char[100];
	strcpy(dept, DEPT.c_str());
	salary = SALARY;
	periodOfService = POS;
}

EmployeeInfo::EmployeeInfo(EmployeeInfo &employee){
	name = new char[50];
	strcpy(name,employee.name);
	dept = new char[100];
	strcpy(dept,employee.dept);
	salary = employee.salary;
	periodOfService = employee.periodOfService;
}

EmployeeInfo::~EmployeeInfo(){
	delete[] name;
	delete[] dept;
	cout<<"name and dept memory freed"<<endl;
}

void EmployeeInfo::takeInput(string NAAM, string DEPT,double SALARY,double POS){
	strcpy(name, NAAM.c_str());
	strcpy(dept, DEPT.c_str());
	salary = SALARY;
	periodOfService = POS;
}

void EmployeeInfo::display(){

	cout<<endl;
	string NAME(name);
	string DEPT(dept);

	cout<<"Name : "<<NAME<<endl;
	cout<<"Department : "<<DEPT<<endl;
	cout<<"Salary : "<<salary<<endl;
	cout<<"Period Of Service: "<<periodOfService<<endl;
}

string EmployeeInfo::getName(){
	string NAMEE(name);
	return NAMEE;
}
