#include "stdafx.h"
#include "LinkedList.h"

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

void LinkedList::add(CSWoman * woman)
{
	//TODO
	
	Node* node = new Node(nullptr, *woman);
}

//Ctors and Dtors
Node::Node(Node * next, CSWoman& woman)
	:next_{next}, woman_{woman}
{
}

Node::~Node()
{
}

LinkedList::LinkedList() :m_head{ nullptr }
{
}

LinkedList::~LinkedList() {}
