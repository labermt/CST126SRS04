#include "stdafx.h"
#include <iostream>
#include <cassert>
#include "linklist.h"

node::node(const CSWoman data) : myinfo_{ new CSWoman{data} }
{ }

CSWoman node::getinfo() const
{
	return *myinfo_;
}

node * node::getnext() const
{
	return next_;
}

void node::setnext(node* data)
{
	next_ = data ;
}

void node::printmyinfo()
{
	//myinfo_->printInfo;
}

void list::addfunc(CSWoman data)
{
	auto filler = new node { data };
	assert(filler != nullptr);
	filler->setnext(head_);
	head_ = filler;
}

void list::printlist()
{
	node * current = head_;
	while (current != nullptr)
	{
		auto cswoman{ current->getinfo() };
		cswoman.printInfo();
		current = current->getnext();
	}
}