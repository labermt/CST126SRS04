#include "stdafx.h"
#include <iostream>
#include <string>
#include "wicll.h"

using namespace std;


CSWoman::CSWoman()
{
	head = nullptr;
	curr = nullptr;
	temp = nullptr;
}

void CSWoman::AddNode(string name, unsigned year, string fact) 
	{
	nodePtr n = new node;  //create a new node pointer called n and creating new node. new poitner points to that.
	n->next = nullptr;
	n->name_ = name;
	n->birthYear_ = year;
	n->fact_ = fact;


	//if there is already a list
	if (head != nullptr) 
		{
		curr = head;
		//check to see if it is the last node in the list
		while (curr->next != nullptr) {
			curr = curr->next; //current pointer points to next until its last node in the list
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}

//pass in data and stored in delData
//walk through list until we come across node with value = delData
//delete that node and patch up list
/*
void CSWoman::DeleteNode(int delData) 
	{
	nodePtr delPtr = nullptr;
	temp = head;
	curr = head;

	//check to see if curr node is the one we want to delete.
	//temp will trail curr so we can patch node

	while (curr != nullptr && curr->data != delData)
	{
		temp = curr;
		curr = curr->next;
	}
	if (curr == nullptr)
	{
		cout << delData << " was not in the list\n";
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next; //advances curr to next node
		temp->next = curr; //patches the the hole in the list
		if (delPtr == head)
		{
			head = head->next;
			temp = nullptr;
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted\n";

	}
}
*/

void CSWoman::PrintList()
{
	curr = head;
	while (curr != nullptr)
	{
		cout << "Name: " << curr->name_ << endl;
		cout << "Born: " << curr->birthYear_ << endl;
		cout << "Fun fact: " << curr->fact_ << endl << endl;
		curr = curr->next;
	}
}

