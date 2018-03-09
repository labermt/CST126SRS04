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
		int birthYear_;
		string fact_;
		node* next;
	}*nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public:
	CSWoman();
	void AddNode(string name, unsigned year, string fact);
//	void DeleteNode(int delData);
	void PrintList();

};