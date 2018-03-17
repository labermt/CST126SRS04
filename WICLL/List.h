#pragma once
#include "Node.h"

class List
{
private:
	static Node* createList();
	static void deleteLinkedList(const Node* const node);
	static void print(const Node* const node);

private:
	Node* head_;

public:
	List();
	~List();
	void printCSWomen() const;
	void reverse();
};