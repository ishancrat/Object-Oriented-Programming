/*
 * Stack.cpp
 *
 *  Created on: 16-Aug-2023
 *      Author: Ishan
 */

#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

Stack::Stack(){
	top=-1;
	cout<<"stack initialized"<<endl;
}

void Stack::push(int n){
	if (top>=10){
		cout<<"Stack Overflow, cant push!"<<endl;
		return;
	}
	top++;
	stack[top]=n;
	cout<<n<<" was pushed onto the stack"<<endl;
}

void Stack::pop(){
	if(top<=-1){
		cout<<"Stack Underflow, cant pop!"<<endl;
		return;
	}
	top--;
	cout<<stack[top+1]<<" was popped from the stack"<<endl;
}

void Stack::display(){
	if(top==-1){
		cout<<"stack is empty :("<<endl;
		return;
	}
	for (int i=0;i<=top;i++){
		cout<<stack[i]<<" ";
	}
	cout<<endl;
}

void Stack::displayPtr(){
	cout<<"stack pointer is at "<<top<<endl;
}
