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

void linkedlist::add(const CSWoman * const cswoman) const
{
	
}
