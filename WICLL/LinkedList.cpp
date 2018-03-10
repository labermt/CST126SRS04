#include "stdafx.h"

#include "LinkedList.h"
#include <iostream>

LinkedList::Node::Node(Node* next, CSWoman * data):
	next_{next}, 
	data_{data}
{
}

LinkedList::Node::~Node()
{
	delete data_;
	delete next_;
}

const CSWoman * LinkedList::Node::getData() const
{
	return Node::data_;
}

const LinkedList::Node * LinkedList::Node::getNext() const
{
	return next_;
}

LinkedList::~LinkedList()
{
	delete head_;
}

const LinkedList::Node * LinkedList::getHead() const
{
	return head_;
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

void LinkedList::addToList(CSWoman * const woman)
{
	auto const first = new Node(head_, woman);
	head_ = first;
}

void LinkedList::printList()
{

}

std::ostream & operator<<(std::ostream & os, const LinkedList & list)
{
	auto head = list.getHead();
	if(head != nullptr)
	{
		os << *head;
		auto tail{ head -> getNext()};
		if (tail != nullptr) os << *tail;
	}

	return os;
}

std::ostream & operator<<(std::ostream & os, const LinkedList::Node & node)
{
	os << node.getData() << std::endl;
	return os;
}
