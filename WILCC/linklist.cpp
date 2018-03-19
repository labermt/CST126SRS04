#include "stdafx.h"
#include <cassert>
#include "linklist.h"

node::node(const CSWoman * data) : myinfo_{ data }
{ }

node::~node()
{
	delete myinfo_;
}

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

void list::addfunc(const CSWoman * const data)
{
	auto filler = new node{ data };
	if (filler != nullptr);
	{
		filler->setnext(head_);
		head_ = filler;
	}
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

void list::reverselist() // Why not using the code from class?
{
	node * current{ head_ };
	node * next{ nullptr };
	node * previous{ head_ };
	if (current->getnext() != nullptr)
	{
		current = current->getnext();
		while (current->getnext() != nullptr)
		{
			next = current->getnext();
			current->setnext(previous);
			previous = current;
			current = next;
		}
		current->setnext(previous);
		head_->setnext(nullptr);
		head_ = current;
	}
}

void list::deletelist()
{
	if (head_ != nullptr)
	{
		node * next = head_->getnext();
		while (head_->getnext() != nullptr)
		{
			delete head_;
			head_ = next;
			next = head_->getnext();
		}
		delete head_;
		head_ = nullptr;
	}
}
