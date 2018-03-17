#include "stdafx.h"
#include "Node.h"

Node::Node(Node* const next) :
	next_{ next },
	woman_{ nullptr }
{

}

Node* Node::getNext() const
{
	return next_;
}

void Node::setNext(Node* const next)
{
	next_ = next;
}


const CSWoman* Node::getWoman() const
{
	return woman_;
}

void Node::setWoman(const CSWoman* const woman)
{
	woman_ = woman;
}
