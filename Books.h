/*
 * Books.h
 *
 *  Created on: 18-Aug-2023
 *      Author: Ishan
 */

#ifndef BOOKS_H_
#define BOOKS_H_
#include "globalVars.h"
#include <string>
#include <vector>
using namespace std;

class Books {
private:
	string author;
	string title;
	string publisher;
	int stockPosition;
	int price;

public:
	Books();
	void successful();
	void failed();
	void updatePrice(int);
	void updateStock(int);
	void display();
	void addBook(string,string,string,int,int);
	string getAuthor();
	void decrementStock(int);
	string getTitle();
	int getStockPosition();


};

#endif /* BOOKS_H_ */
