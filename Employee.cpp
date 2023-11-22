//============================================================================
// Name        : Employee.cpp
// Author      : IshanB
// Version     :
// Copyright   : Your copyright notice
// Description : Employee program using pointers
//============================================================================
#include "EmployeeInfo.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

static int ptr=0;

void inputData(string name,string dept,double sal,double pos,EmployeeInfo e[]){
	if (ptr>=19){
		cout<<"array size exceeded....";
		return;
	}
	e[ptr].takeInput(name,dept,sal,pos);
	ptr++;
}

void display(string name,EmployeeInfo e[]){
	for (int i=0;i<20;i++){
		if (e[i].getName()==name){
			e[i].display();
			return;
		}
	}
}

int main() {

//	EmployeeInfo blank;
	EmployeeInfo e[20];
//	EmployeeInfo a("Mike","BackEndDev",55000,15);
//	a.display();
//
//	cout<<endl;
//
//	EmployeeInfo b(a);
//	b.display();

	int choice;
	string name,dept;
	double sal,pos;


	while(4){
	cout<<"------------------------------------------------------"<<endl;
	cout<<"what do you want to do-------"<<endl;
	cout<<"1. Enter User Data "<<endl;
	cout<<"2. Display User Data "<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"your choice : ";
	cin>>choice;
	cout<<"------------------------------------------------------"<<endl;
	switch(choice){
	case 1:
		cout<<"enter name: ";cin>>name;
		cout<<"enter dept: ";cin>>dept;
		cout<<"enter salary: ";cin>>sal;
		cout<<"enter period of service: ";cin>>pos;
		inputData(name,dept,sal,pos,e);
		break;

	case 2:
		cout<<"enter name of person: ";
		cin>>name;
		display(name, e);
		break;

	case 3:
		cout<<"exiting..."<<endl;
		break;

	default:
		cout<<"wrong input, try again!";
		break;
	}

	}

	return 0;
}
