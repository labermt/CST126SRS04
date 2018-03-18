#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class CSWoman
{
private:
	typedef struct node // The using keyword is the modern way to do this. 
	{
		string name;
		unsigned birth_year;
		string fact;
		node* next;
	}*nodePtr;

// Hiding the fact something is a pointer behind a typedef is generally not a good idea. 
	nodePtr head_;
	nodePtr curr_;
	nodePtr temp_;
	

public:
	CSWoman();
	void addNode(string name, unsigned year, string fact);
	void deleteNode(string del_name);
	void reverseList();
	void printList();

};