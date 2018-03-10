#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class CSWoman
{
private:
	typedef struct node
	{
		string name;
		unsigned birth_year;
		string fact;
		node* next;
	}*nodePtr;

	nodePtr head_;
	nodePtr curr_;
	nodePtr temp_;
	

public:
	CSWoman();
	void addNode(const string name, const unsigned year, const string fact);
	void deleteNode(string del_name);
	void reverseList();
	void printList();

};