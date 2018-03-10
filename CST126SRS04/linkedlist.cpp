#include "linkedlist.h"

linkedlist::node* linkedlist::reverse(node * const head) const 
{
	node * prev{ nullptr };
	node * curr{ head };

	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr; 
		curr = next; 
	}

	return prev; 
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
