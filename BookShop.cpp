//============================================================================
// Name        : BookShop.cpp
// Author      : IshanB
// Version     :
// Copyright   : Your copyright notice
// Description : BookStore implementation using classes and objects
//============================================================================
#include "Books.h"
#include "globalVars.h"
#include "BooksPtr.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//int returnPos(string name,string writer,Books b[]){
//	for (int i=0;i<totalBooks;i++){
//		if (b[i].getTitle()==name && b[i].getAuthor()==writer){
//			return i;
//		}
//	}
//	return -1;
//}
//
//void retrieveBooks(string name,string writer,int qty,Books b[]){
//	int pos=returnPos(name,writer,b);
//	if (pos==-1){
//		cout<<"book not found!"<<endl;
//		return;
//	}
//	if (b[pos].getStockPosition()>=qty){
//		cout<<"Books available, transaction successful"<<endl;
//		b[pos].decrementStock(qty);
//		successfulTransactions++;
//	}
//}
//
//void updatePrice(string name,string writer,int newPrice,Books b[]){
//	int pos=returnPos(name,writer,b);
//	if (pos==-1){
//		cout<<"book not found!"<<endl;
//		return;
//	}
//	b[pos].updatePrice(newPrice);
//	cout<<"Price Updated!"<<endl;
//}
//
//void updateStock(string name,string writer,int numNew,Books b[]){
//	int pos=returnPos(name,writer,b);
//	if (pos==-1){
//		cout<<"book not found!"<<endl;
//		return;
//	}
//	b[pos].updateStock(numNew);
//	cout<<"Price Updated!"<<endl;
//}
//
//void addBook(string tempTitle,string tempAuthor,string tempPublisher,int tempPrice,int tempStock,Books b[]){
//	b[totalBooks].addBook(tempTitle,tempAuthor,tempPublisher,tempPrice,tempStock);
//	cout<<"Book Details Added"<<endl;
//	totalBooks++;
//}


int returnPosPtr(string name,string writer,BooksPtr* pointer){
	for (int i=0;i<totalBooksPtr;i++){
		if ((pointer+i)->getTitlePtr()==name && (pointer+i)->getAuthorPtr()==writer){
			return i;
		}
	}
	return -1;
}

void retrieveBooksPtr(string name,string writer,int qty,BooksPtr* pointer){
	int pos=returnPosPtr(name,writer,pointer);
	if (pos==-1){
		cout<<"book not found!"<<endl;
		return;
	}
	if ((pointer+pos)->getStockPositionPtr()>=qty){
		cout<<"Books available, transaction successful"<<endl;
		(pointer+pos)->decrementStockPtr(qty);
		successfulTransactionsPtr++;
		return;
	}
	cout<<"Required books not in stock!"<<endl;
	failedTransactionsPtr++;
}

void updatePricePtr(string name,string writer,int newPrice,BooksPtr* pointer){
	int pos=returnPosPtr(name,writer,pointer);
	if (pos==-1){
		cout<<"book not found!"<<endl;
		return;
	}
	(pointer+pos)->updatePricePtr(newPrice);
	cout<<"Price Updated!"<<endl;
}

void updateStockPtr(string name,string writer,int numNew,BooksPtr* pointer){
	int pos=returnPosPtr(name,writer,pointer);
	if (pos==-1){
		cout<<"book not found!"<<endl;
		return;
	}
	(pointer+pos)->updateStockPtr(numNew);
	cout<<"Price Updated!"<<endl;
}

void addBookPtr(string tempTitle,string tempAuthor,string tempPublisher,int tempPrice,int tempStock,BooksPtr* pointer){
	(pointer+totalBooksPtr)->addBookPtr(tempTitle,tempAuthor,tempPublisher,tempPrice,tempStock);
	cout<<"Book Details Added"<<endl;
	totalBooksPtr++;
}

int main() {
	Books b[20];
	cout<<"Welcome to the Book Management System. What would you like to do?"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"1. Retrieve Books"<<endl;
	cout<<"2. Update Price"<<endl;
	cout<<"3. Update Stock"<<endl;
	cout<<"4. Add New Book"<<endl;
	cout<<"5. Display successful and unsuccessful transactions"<<endl;
	cout<<"6. Display Stock Information"<<endl;
	cout<<"7. Exit"<<endl;

	string tempTitle;
	string tempAuthor;
	string tempPublisher;
	int tempQty;
	int newPrice;
	int numNew;
	int tempPrice;
	int tempStock;
	int selector;
	string getLineTemp;
	int flag=0;

//	while(flag==0){
//		cout<<"----------------------------------------------------------------------------"<<endl;
//		cout<<"Select an option: ";
//		cin>>selector;
//
//		switch (selector){
//
//			case 1:
//				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT
//
//				cout<<"Enter Title: ";
//				getline(cin,tempTitle);
//
//				cout<<"Enter Author: ";
//				getline(cin,tempAuthor);
//
//				cout<<"Enter Quantity: ";cin>>tempQty;
//				retrieveBooks(tempTitle,tempAuthor,tempQty,b);
//				break;
//
//			case 2:
//				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT
//
//				cout<<"Enter Title: ";
//				getline(cin,tempTitle);
//
//				cout<<"Enter Author: ";
//				getline(cin,tempAuthor);
//
//				cout<<"Enter New Price: ";cin>>newPrice;
//				updatePrice(tempTitle,tempAuthor,newPrice,b);
//				break;
//
//			case 3:
//				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT
//
//				cout<<"Enter Title: ";
//				getline(cin,tempTitle);
//
//				cout<<"Enter Author: ";
//				getline(cin,tempAuthor);
//
//				cout<<"Enter Stock Value: ";cin>>numNew;
//				updateStock(tempTitle,tempAuthor,numNew,b);
//				break;
//
//			case 4:
//				if (totalBooks>=19){
//					cout<<"No more objects can be created"<<endl;
//					break;
//				}
//
//				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT
//
//				cout<<"Enter Title: ";
//				getline(cin,tempTitle);
//
//				cout<<"Enter Author: ";
//				getline(cin,tempAuthor);
//
//				cout<<"Enter Publisher: ";
//				getline(cin,tempPublisher);
//
//				cout<<"Enter Price: ";cin>>tempPrice;
//				cout<<"Enter Stock Value: ";cin>>tempStock;
//				addBook(tempTitle,tempAuthor,tempPublisher,tempPrice,tempStock,b);
//				break;
//
//			case 5:
//				cout<<"Successful Transactions : "<<successfulTransactions<<endl;
//				cout<<"Failed Transactions : "<<failedTransactions<<endl;
//				break;
//
//			case 6:
//				cout<<"Displaying entire stock information : : : : : :"<<endl;
//				for (int i=0;i<totalBooks;i++){
//					b[i].display();
//				}
//				break;
//
//			case 7:
//				cout<<"Exiting..."<<endl;
//				flag=1;
//				break;
//
//			default:
//				cout<<"wrong input, enter again!"<<endl;
//
//		}
//	}

	BooksPtr* ptr = new BooksPtr[20];


	while(flag==0){
		cout<<"----------------------------------------------------------------------------"<<endl;
		cout<<"Select an option: ";
		cin>>selector;

		switch (selector){

			case 1:
				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT

				cout<<"Enter Title: ";
				getline(cin,tempTitle);

				cout<<"Enter Author: ";
				getline(cin,tempAuthor);

				cout<<"Enter Quantity: ";cin>>tempQty;
				retrieveBooksPtr(tempTitle,tempAuthor,tempQty,ptr);
				break;

			case 2:
				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT

				cout<<"Enter Title: ";
				getline(cin,tempTitle);

				cout<<"Enter Author: ";
				getline(cin,tempAuthor);

				cout<<"Enter New Price: ";cin>>newPrice;
				updatePricePtr(tempTitle,tempAuthor,newPrice,ptr);
				break;

			case 3:
				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT

				cout<<"Enter Title: ";
				getline(cin,tempTitle);

				cout<<"Enter Author: ";
				getline(cin,tempAuthor);

				cout<<"Enter Stock Value: ";cin>>numNew;
				updateStockPtr(tempTitle,tempAuthor,numNew,ptr);
				break;

			case 4:
				if (totalBooksPtr>=19){
					cout<<"No more objects can be created"<<endl;
					break;
				}

				cin.ignore(); //IMPORTANT ; SPACE-INCLUSIVE STRINGS WON'T GET ENTERED WITHOUT USING THIS STATEMENT

				cout<<"Enter Title: ";
				getline(cin,tempTitle);

				cout<<"Enter Author: ";
				getline(cin,tempAuthor);

				cout<<"Enter Publisher: ";
				getline(cin,tempPublisher);

				cout<<"Enter Price: ";cin>>tempPrice;
				cout<<"Enter Stock Value: ";cin>>tempStock;
				addBookPtr(tempTitle,tempAuthor,tempPublisher,tempPrice,tempStock,ptr);
				break;

			case 5:
				cout<<"Successful Transactions : "<<successfulTransactionsPtr<<endl;
				cout<<"Failed Transactions : "<<failedTransactionsPtr<<endl;
				break;

			case 6:
				cout<<"Displaying entire stock information : : : : : :"<<endl;
				for (int i=0;i<totalBooksPtr;i++){
					(ptr+i)->displayPtr();
				}
				break;

			case 7:
				cout<<"Exiting..."<<endl;
				flag=1;
				break;

			default:
				cout<<"wrong input, enter again!"<<endl;

		}
	}

	return 0;
}
