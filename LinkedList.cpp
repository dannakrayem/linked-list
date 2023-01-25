#include "LinkedList.h"
#include <iostream>
#include "node.h"


//this file explains what happens in each function defined in header file


using namespace std;

//below we are creating a class called LinkedList
LinkedList::LinkedList()
{
	length = 0;
	//below means pointing at nothing
	//head points to data value in first node
	head = NULL;
}

//we have a linked list and we want to insert some integer input into linked list
void LinkedList::insert(int num)
{
	//now set aside memory for new class called node so creating pointer to a node
	Node* node = new Node();
	//we defined data in node file
	//line 19 points to first node's data value
	node->data = num;
	//line 21 points node to previous node data value
	node->next = head;
	head = node;
	//we need to increment length so everytime we add it increases
	length++;
}

//print to screen
void LinkedList::display()
{
	Node* curr = this->head;
	//next line says you start i with 1 and then you increment by 1 each time
	//also sets current node number= head
	int i = 1;
	while (curr)
	{
		std::cout << "node value = " << i << curr->data;
		curr = curr->next;
		i++;
	}
}

int LinkedList::getLength()
{
	//methods to get length go in curly bracks
	return length;
}

//get new pointer called curr and have at top of linked list
//below you define num
void LinkedList::find(int num)
{
	Node* curr = this->head;
	//use while loop because you are looking for something and won't know how many times you have to run it to find it

	//0 means null or if you haven't run out of lists keep looking
	while (curr != 0)
	{

		//if data is equal to what we are searching for which is number then current= num current = next
		if (curr->data == num)
		{
			cout << "found it" << endl;
		}
		else
		{
			curr = curr->next;
		}

	}
}

void LinkedList::remove(int num)
{
	Node* curr = this->head;
	Node* prev = this->head;

	//define 2 clocks; a start and an end clock
	clock_t start, end;

	//start clock
	start = clock();

	
	//end clock
	end = clock();

	//display clock by showing difference between 1st and second time which is why we divide by 1000
	cout << (end - start) / 1000.00;

	//line below says stop program until you hit a key
	system("pause");
}
