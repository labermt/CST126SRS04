#include "stdafx.h"

#include "Node.h"

//Node::Node():
//	info_{}, next_{}
//{}
//
//Node::Node(CSWoman const * const info) :
//	info_{ info }, next_{ nullptr }
//{}

Node::Node(CSWoman const * const info, Node* next):
	info_{ info }, next_{ next }
{}

const CSWoman* Node::getInfo() const
{
	return info_;
}