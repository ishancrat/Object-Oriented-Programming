//============================================================================
// Name        : Inheritance.cpp
// Author      : IshanB
// Version     :
// Copyright   : Your copyright notice
// Description : Inheritance implementation in C++
//============================================================================
#include "score.h"
#include "student.h"
#include "global.h"
#include <iostream>
#include <string>
using namespace std;

void addData(score s[]){
	if (ptr>=9){
		cout<<"array full!"<<endl;
		return ;
	}

	string n;int m;int p;int b;

	cout<<"enter name: ";
	cin.ignore();
	getline(cin,n);
	cout<<"enter physics marks: ";cin>>p;
	cout<<"enter math marks: ";cin>>m;
	cout<<"enter biology marks: ";cin>>b;
	cout<<"------------------------------------"<<endl;
	s[ptr].addData(n,m,p,b);
	ptr++;
	return;
}

void showData(score s[],int pos){
	if (pos>=9){
		cout<<"invalid position"<<endl;
		return ;
	}
	s[pos].showData();
}

void getScore(score s[],int pos){
	if (pos>=9){
		cout<<"invalid input"<<endl;
		return;
	}
	s[pos].getScore();
}

int main() {
//	student stu[10];
//	addData(stu);
//	addData(stu);
//	addData(stu);
//	addData(stu);
//	showData(stu,2);

	score s[10];
	addData(s);
	addData(s);
	addData(s);
	showData(s,1);

	getScore(s,1);
}
