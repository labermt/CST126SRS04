#pragma once
#include "LinkedList.h"
#include "CSWoman.h"

class Node
{
public:
	Node* next_;
	CSWoman woman_;

	Node(Node* next, CSWoman& woman);
	~Node();
};

class LinkedList
{
private:
	Node * m_head;

public:
	LinkedList();
	~LinkedList();
	void reverse(Node* head);
	void add(CSWoman* woman);
};

