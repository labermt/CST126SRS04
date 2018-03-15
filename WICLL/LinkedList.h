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
		const CSWoman* const data_;

	public:
		Node(Node* next, CSWoman* data);
		~Node();

	public:
		const CSWoman* getData() const;
		const Node* getNext() const;
	};

private:
	Node* head_ = nullptr;

public:
	~LinkedList();

public:
	const Node* getHead() const;
	void addToList(CSWoman* const woman);
	void reverse();
}; 

std::ostream& operator<<(std::ostream & os, const LinkedList& list);
std::ostream& operator<<(std::ostream & os, const LinkedList::Node& node);
