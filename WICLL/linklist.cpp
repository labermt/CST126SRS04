// reverse.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "LinkList.h"
#include "node.h"
#include <iostream>
using namespace std;
// from http://www.cplusplus.com/forum/beginner/135381/
void LinkList()
{
	Node * head;
	Node * previous = nullptr;
	Node * current = head;
	Node * next_;
	if (head = nullptr)
		cout << "NO ENTRY" << endl;
	else if (head->next_ = nullptr)
		cout << "ONE ENTRY" << endl;
	else while (nullptr != current)
	{
		next_ = current->next_;
		current->next_ = previous;
		previous = current;
		current = next_;
	}
	head = previous;
}