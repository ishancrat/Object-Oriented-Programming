/*
 * BooksPtr.h
 *
 *  Created on: 18-Aug-2023
 *      Author: Ishan
 */

#ifndef BOOKSPTR_H_
#define BOOKSPTR_H_
#include "globalVars.h"
#include <string>
using namespace std;

class BooksPtr {
private:
	string authorPtr;
	string titlePtr;
	string publisherPtr;
	int stockPositionPtr;
	int pricePtr;

public:
	BooksPtr();
	void successfulPtr();
	void failedPtr();
	void updatePricePtr(int);
	void updateStockPtr(int);
	void displayPtr();
	void addBookPtr(string,string,string,int,int);
	string getAuthorPtr();
	void decrementStockPtr(int);
	string getTitlePtr();
	int getStockPositionPtr();


};

#endif /* BOOKSPTR_H_ */
