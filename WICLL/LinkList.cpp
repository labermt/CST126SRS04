#include "stdafx.h"
#include "LinkList.h"
#include <iostream>


LinkList::~LinkList()
{
	delete head_;

}

void LinkList::reverse()
{
	Node* prev{ nullptr };
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

void LinkList::add(CSWoman* const cs_woman)
{
	auto const node = new Node(head_, cs_woman);
	head_ = node;
}


const LinkList::Node* LinkList::get_head() const
{
	return head_;
}

LinkList::Node::Node(Node* next,  CSWoman* data):
	next_{next}, data_{data}
{

}

const CSWoman* LinkList::Node::get_data() const
{
	return data_;
}

const LinkList::Node * LinkList::Node::get_next() const
{
	return next_;
}

LinkList::Node::~Node()
{
	delete data_;
	delete next_;
}

std::ostream& operator<<(std::ostream&os, const LinkList& list)
{
	auto const head = list.get_head();
	if (head != nullptr)
	{
		os << *head;
	}
	return os;
}

std::ostream& operator<<(std::ostream& os, const LinkList::Node& node)
{
	os << *node.get_data();
	auto const tail{ node.get_next() };
	if (tail != nullptr)
	{
		os << *tail;
	}
	return os;
}
