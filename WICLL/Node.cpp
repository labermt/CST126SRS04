#include "stdafx.h"
#include "Node.h"

Node::Node(Node* const next, const CSWoman* const woman) :
	next_{ next },
	woman_{ woman }
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
