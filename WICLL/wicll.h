#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class CSWoman
{
private:
	typedef struct node
	{
		string name_;
		unsigned birthYear_;
		string fact_;
		node* next;
	}*nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;
	nodePtr prev;

public:
	CSWoman();
	void AddNode(string name, unsigned year, string fact);
	void DeleteNode(string delName);
	void reverseList();
	void PrintList();

};