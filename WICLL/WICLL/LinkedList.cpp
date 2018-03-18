#include "stdafx.h"
#include <iostream>
#include "LinkedList.h"

void LinkedList::reverse()
{
	// Code based on Mitch's slides
	Node* prev{ nullptr };
	auto curr{ m_head };
	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next;
	}
	m_head = prev;
}

void LinkedList::clearList()
{
	Node * next = m_head;
	Node * deleteNode = next;
	while (next != nullptr)
	{
		next = next->next_;
		delete deleteNode;
		deleteNode = next;
	}
}

void LinkedList::printList()
{
	Node * next = m_head;
	while (next != nullptr)
	{
		next->woman_.print();
		next = next->next_;
	}
}

void LinkedList::add(const CSWoman * const woman)
{
	m_head = new Node(m_head, *woman);
	//if (m_head == nullptr) {
	//	//init list
	//	m_head = new Node(nullptr, *woman);
	//	node = m_head;
	//	temp_node = m_head;
	//}
	//else {
	//	//add node
	//	node = new Node(nullptr, *woman);
	//	temp_node->next_ = node;
	//	temp_node = node;
	//}
}

// Ctors and Dtors
Node::Node(Node * next, const CSWoman& woman)
	: next_{next}, woman_{woman}
{
}

//Node::~Node()
//{
//}

LinkedList::LinkedList() :m_head{ nullptr }
{
}

// LinkedList::~LinkedList() {} // If a dtor doesn't do anything, the default is preferred. 
