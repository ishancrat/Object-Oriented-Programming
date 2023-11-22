/*
 * Stack.h
 *
 *  Created on: 16-Aug-2023
 *      Author: Ishan
 */

#ifndef STACK_H_
#define STACK_H_

class Stack {
private:
	int stack[10];
	int el;
	int top;

public:
	Stack();
	void push(int n);
	void pop();
	void display();
	void displayPtr();
};

#endif /* STACK_H_ */
