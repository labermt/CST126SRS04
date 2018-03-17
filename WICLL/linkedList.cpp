#pragma once
#include "stdafx.h"
#include "linkedList.h"
//https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr


void linkedList::nodes(CSWoman* file)
{
	while (next_ != NULL)
	{
		Node *newNode = new Node;
		newNode->data_ = file;
		newNode->next_ = head_;
	}
	//cout data
	delete Node;
};
