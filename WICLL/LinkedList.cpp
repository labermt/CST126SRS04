#include "stdafx.h"

#include "LinkedList.h"

LinkedList::Node::Node(Node* next, CSWoman* data):
	next_{next}, 
	data_{data}
{
}

void LinkedList::reverse(Node* head)
{
	Node* prev{ nullptr };
	auto curr{ head };
	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}


