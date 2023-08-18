/*
 * BooksPtr.cpp
 *
 *  Created on: 18-Aug-2023
 *      Author: Ishan
 */

#include "BooksPtr.h"
#include "globalVars.h"
#include <iostream>
#include <string>
using namespace std;

BooksPtr::BooksPtr(){

}


void BooksPtr::updatePricePtr(int newPrice){
	pricePtr=newPrice;
}

//update stock sets the stock qty to the number you desire
void BooksPtr::updateStockPtr(int numNew){
	stockPositionPtr=numNew;
}

//decrementStock gets called after a successful transaction
void BooksPtr::decrementStockPtr(int qty){
	stockPositionPtr=stockPositionPtr-qty;
}

void BooksPtr::addBookPtr(string name,string writer,string publication,int cost,int qty){
	titlePtr=name;
	authorPtr=writer;
	publisherPtr=publication;
	pricePtr=cost;
	stockPositionPtr=qty;
	totalBooksPtr++;
}

void BooksPtr::displayPtr(){
	cout<<"Title: "<<titlePtr<<endl;
	cout<<"Author : "<<authorPtr<<endl;
	cout<<"Publisher : "<<publisherPtr<<endl;
	cout<<"Stock Position : "<<stockPositionPtr<<endl;
	cout<<"Price : "<<pricePtr<<endl;
	cout<<"---------------------------------------------"<<endl;

}

string BooksPtr::getTitlePtr(){
	return titlePtr;
}

string BooksPtr::getAuthorPtr(){
	return authorPtr;
}

int BooksPtr::getStockPositionPtr(){
	return stockPositionPtr;
}

