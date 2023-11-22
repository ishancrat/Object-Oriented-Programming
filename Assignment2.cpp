//============================================================================
// Name        : Assignment2.cpp
// Author      : IshanB
// Version     :
// Copyright   : Your copyright notice
// Description : Assignment solution
//============================================================================
//3 question assignment given on 16 Aug 2023

#include "Rainfall.h"
#include "ThemePark.h"
#include "EBS.h"
#include <iostream>
#include <vector>
using namespace std;


int main() {
	/*---------------------------------------------------------------*/
	/*---------------------------------------------------------------*/
	/*	CODE PORTION FOR QUES.1 - RAINFALL PROBLEM ------------------*/
    /*---------------------------------------------------------------*/
	/*---------------------------------------------------------------*/

//	Rainfall R(2023);
//	cout<<"Select an Option---------------"<<endl;
//	cout<<"1. Display Monthly Amounts\n";
//	cout<<"2. Display Total Amount\n";
//	cout<<"3. Display Average Amount\n";
//	cout<<"4. Display Max Amount\n";
//	cout<<"5. Display Min Amount\n";
//	cout<<"6. Exit"<<endl;
//
//	while(4){
//		int var;
//		cout<<"--------------------------------"<<endl;
//		cout<<"Your Choice : "<<endl;
//		cin>>var;
//
//		switch (var){
//			case 1:
//				R.displayMonthly();
//				break;
//			case 2:
//				cout<<"Total rainfall this year was : "<<R.displayTotal()<<endl;
//				break;
//			case 3:
//				cout<<"The average rainfall this year was : "<<R.displayAverage()<<endl;
//				break;
//			case 4:
//				cout<<"The maximum rainfall this year was : "<<R.displayHigh()<<endl;
//				break;
//			case 5:
//				cout<<"The minimum rainfall this year was : "<<R.displayLow()<<endl;
//				break;
//			case 6:
//				cout<<"Exiting the program...";
//				break;
//			default:
//				cout<<"Invalid input, try again!"<<endl;
//
//		}
//
//	}




	/*---------------------------------------------------------------*/
	/*---------------------------------------------------------------*/
	/*CODE PORTION FOR QUES.2 - THEME PARK --------------------------*/
	/*---------------------------------------------------------------*/
	/*---------------------------------------------------------------*/

//	ThemePark park;
//	park.setNumPersons();
//	park.setAge();
//	park.setHours();
//	park.setSwing();
//	cout<<"The total cost is : "<<park.calculateTotalCost()<<endl;


	/*---------------------------------------------------------------*/
	/*---------------------------------------------------------------*/
	/*CODE PORTION FOR QUES.3 - EBS (ELEC BILL STATEMENT) -----------*/
	/*---------------------------------------------------------------*/
	/*---------------------------------------------------------------*/

	EBS user1(378);
	cout<<"The total amount due is : "<<user1.amtDue()<<endl;

	return 0;
}
