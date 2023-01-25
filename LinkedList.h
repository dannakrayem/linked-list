#pragma once


//define functions in this file insert find and remove
#include "node.h"
class LinkedList
{
private:
	//this includes data to be stored
	//how big is linkedlist
	int length;
	//we're calling pointer to node head
	Node* head;

public:
	//methods of what to do with stored data i.e. constructor which includes name of class with no return type
	//methods need to have paranthesis to be able to provide parameters
	LinkedList();
	void insert(int data);
	void display();
	//function below gets length of data stored before as integer
	int getLength();

	//find value; don't return anything
	void find(int data);
	

	//remove function
	void remove(int data);
};
