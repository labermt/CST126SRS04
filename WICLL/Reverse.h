#pragma once
#include "stdafx.h"
#include "node.h"
#include <iostream>
using namespace std;
void reverse()
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