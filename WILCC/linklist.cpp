#include "stdafx.h"
#include "linklist.h"
#include <iostream>

node::node(const CSWoman &data) : myinfo_ (&data)
{ }

void node::setnext(node &data)
{
	next_ = &data ;
}

void node::printmyinfo()
{
	myinfo_->printInfo;
}

void list::addfunc(CSWoman &data)
{
	node filler{ data };
	if (head_ == nullptr)
	{
		head_ = &filler;
	}
	else
	{
		filler.setnext(*head_);
		head_ = &filler;
	}
}

void list::printlist()
{
	node * current = head_;
	while (head_ != nullptr)
	{

	}
}