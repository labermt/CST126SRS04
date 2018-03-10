#pragma once

#include "stdafx.h"
#include "LinkedList.h"
#include "CSWomen.h"

class LinkedList
{
public:
	class Node
	{
		friend LinkedList;

	private:
		Node* next_;
		CSWoman* data_;

	public:
		Node(Node * next, CSWoman * data);
		~Node();
		const CSWoman * getData() const;
		const Node * getNext() const;
	};

private:
	Node* head_ = nullptr;

public:
	~LinkedList();

public:
	const Node * getHead() const;
	void reverse();
	void addToList(CSWoman* const woman);
}; 

std::ostream & operator<<(std::ostream & os, const LinkedList & list);
std::ostream & operator<<(std::ostream & os, const LinkedList::Node & node);
