/*
 * Books.cpp
 *
 *  Created on: 18-Aug-2023
 *      Author: Ishan
 */

#include "Books.h"
#include "globalVars.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Books::Books(){

}


void Books::updatePrice(int newPrice){
	price=newPrice;
}

//update stock sets the stock qty to the number you desire
void Books::updateStock(int numNew){
	stockPosition=numNew;
}

//decrementStock gets called after a successful transaction
void Books::decrementStock(int qty){
	stockPosition=stockPosition-qty;
}

void Books::addBook(string name,string writer,string publication,int cost,int qty){
	title=name;
	author=writer;
	publisher=publication;
	price=cost;
	stockPosition=qty;
	totalBooks++;
}

void Books::display(){
	cout<<"Title: "<<this->title<<endl;
	cout<<"Author : "<<this->author<<endl;
	cout<<"Publisher : "<<this->publisher<<endl;
	cout<<"Stock Position : "<<this->stockPosition<<endl;
	cout<<"Price : "<<this->price<<endl;
	cout<<"---------------------------------------------"<<endl;

}

string Books::getTitle(){
	return title;
}

string Books::getAuthor(){
	return author;
}

int Books::getStockPosition(){
	return stockPosition;
}
