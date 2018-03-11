#include "stdafx.h"
#include "linkedlist.h"

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

const linkedlist::node* linkedlist::getHead() const
{
	return head_; 
}

linkedlist::~linkedlist()
{
	delete head_; 
}

void linkedlist::add(CSWoman const & cswoman)
{
	auto const var{ new node(head_, cswoman) }; 
	head_ = var; 
}

linkedlist::node::~node()
{
	delete next_; 
	delete &data_; 
}

linkedlist::node::node(node * const next, CSWoman const & data) :
	next_{ next }, data_{ data }
{
}

CSWoman const & linkedlist::node::getData() const
{
	return data_;
}

const linkedlist::node* linkedlist::node::getNext() const
{
	return next_;
}

std::ostream & operator<<(std::ostream & os, linkedlist::node const & node)
{
	os << node.getData();
	auto const tail(node.getNext());
	if (tail != nullptr)
	{
		os << *tail;
	}
	return os;
}

std::ostream & operator<<(std::ostream & os, linkedlist const & ll)
{
	auto const head{ ll.getHead() };
	if (head != nullptr)
	{
		os << *head;
		auto tail{ head->getNext() };
	}
	
	return os; 
}
