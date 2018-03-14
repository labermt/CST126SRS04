#include "stdafx.h"
#include "link_list.h"
#include <iostream>



link_list::~link_list()
{
	delete head_;

}

void link_list::reverse()
{
	node* prev{ nullptr };
	auto curr{ head_ };
	while (curr != nullptr)
	{
		const auto next = curr -> next_;
		curr -> next_ = prev;
		prev = curr;
		curr = next;
	}
	head_ = prev;
}

void link_list::add(cs_woman* const cs_woman)
{
	auto const new_node = new node(head_, cs_woman);
	head_ = new_node;
}


const link_list::node* link_list::get_head() const
{
	return head_;
}

link_list::node::node(node* next,  cs_woman* data):
	next_{next}, data_{data}
{

}

const cs_woman* link_list::node::get_data() const
{
	return data_;
}

const link_list::node * link_list::node::get_next() const
{
	return next_;
}

link_list::node::~node()
{
	delete data_;
	delete next_;
}

std::ostream& operator<<(std::ostream&os, const link_list& list)
{
	auto const head = list.get_head();
	if (head != nullptr)
	{
		os << *head;
	}
	return os;
}

std::ostream& operator<<(std::ostream& os, const link_list::node& node)
{
	os << *node.get_data();
	auto const tail{ node.get_next() };
	if (tail != nullptr)
	{
		os << *tail;
	}
	return os;
}
