#include "linkedlist.h"
#include "stdafx.h"

void linkedlist::reverse()
{
	node * prev{ nullptr };
	node * curr{ head_ };

	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next; 
	}

	head_ = prev; 
}

void linkedlist::add(CSWoman const * const cswoman) 
{
	auto const var{ new node(head_, cswoman) }; 
	head_ = var; 
}

linkedlist::node::node(node * const next, CSWoman const * const data) :
	next_{ next }, data_{ data }
{
}
