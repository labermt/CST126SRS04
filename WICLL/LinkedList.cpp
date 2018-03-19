#include "stdafx.h"
#include <iostream>
#include "linkedlist.h"

LinkedList::Node::Node(Node* next, const CSWoman* const data):
	next_{next}, 
	data_{data}
{
}

LinkedList::Node::~Node()
{
	delete data_;
	delete next_;
}

const CSWoman* LinkedList::Node::getData() const
{
	return Node::data_;
}

LinkedList::Node* LinkedList::Node::getNext() const
{
	return next_;
}

LinkedList::~LinkedList()
{
	delete head_;
}

LinkedList::Node* LinkedList::getHead() const
{
	return head_;
}

void LinkedList::addToList(const CSWoman* const woman)
{
	auto const first = new Node(head_, woman);
	head_ = first;
}

void LinkedList::reverse()
{
	Node* prev{ nullptr };
	auto curr{ head_ };
	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next;
	}
	head_ = prev;
}

std::ostream& operator<<(std::ostream & os, const LinkedList & list)
{
	if (list.getHead() != nullptr)
	{
		os << *list.getHead();
	}

	return os;
}

std::ostream& operator<<(std::ostream & os, const LinkedList::Node & node)
{
	auto const csWoman{ node.getData() };
	if (csWoman != nullptr) // nullptr check. 
	{
		os << *csWoman;
	}

	auto const nextNode{ node.getNext() }; // node.getNext() is invariant. Save a call. 
	if (nextNode != nullptr)
	{
		os << *nextNode;
	}

	return os;
}
