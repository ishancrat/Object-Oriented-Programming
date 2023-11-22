/*
 * student.cpp
 *
 *  Created on: 25-Aug-2023
 *      Author: Ishan
 */

#include "student.h"
#include "global.h"
#include <iostream>
#include <string>
using namespace std;

void student::addData(string n,int m,int p,int b){
	name=n;
	math=m;
	physics=p;
	biology=b;
}

void student::showData(){
	cout<<"name : "<<name<<endl;
	cout<<"physics : "<<physics<<endl;
	cout<<"math : "<<math<<endl;
	cout<<"biology : "<<biology<<endl;
}


