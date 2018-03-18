#pragma once
#include "LinkedList.h"
#include "CSWoman.h"

class Node
{
public:
	Node* next_;
	const CSWoman woman_;

	Node(Node* next, const CSWoman& woman);
	// ~Node() = default;
};

class LinkedList
{
private:
	Node * m_head;
	// Node * temp_node; // ?
	// Node * node; // ?

public:
	LinkedList();
	// ~LinkedList() = default;
	void reverse();
	void clearList();
	void printList();
	void add(const CSWoman* const woman);
};
