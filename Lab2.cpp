//============================================================================
// Name        : Lab2.cpp
// Author      : IshanB
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//OOPS LAB2 SEM-5
//Implement Stack and LikedList using classses and Objects

#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
	Stack s;
	s.display();
	s.displayPtr();
	s.pop();
	s.display();
	s.displayPtr();

	for (int j=0;j<10;j++){
		s.push(2*j);
	}
	s.display();
	s.displayPtr();
	s.push(20);
	s.displayPtr();
	s.display();
	s.push(999);
	s.display();
	s.displayPtr();


	return 0;

}
