#pragma once

#include "stdafx.h"
#include "linkedlist.h"
#include "CSWomen.h"

class LinkedList
{
public:
	class Node
	{
		friend LinkedList;

	private:
		Node* next_;
		const CSWoman* const data_;

	public:
		Node(Node* next,const CSWoman* const data);
		~Node();

	public:
		const CSWoman* getData() const;
		Node* getNext() const;
	};

private:
	Node * head_{ nullptr };

public:
	~LinkedList();

public:
	Node* getHead() const;
	void addToList(const CSWoman* const woman);
	void reverse();
}; 

std::ostream& operator<<(std::ostream & os, const LinkedList& list);
std::ostream& operator<<(std::ostream & os, const LinkedList::Node& node);
