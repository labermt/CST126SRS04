#include "stdafx.h"
#include "linklist.h"
#include <iostream>

node::node(const CSWoman data) : myinfo_ (&data)
{ }

void node::setnext(CSWoman data)
{
	next_ = &data ;
}

void node::getmyinfo()
{
	std::cout << myinfo_.CSWoman::getname;
	std::cout << myinfo_.getbirthyear;
	std::cout << myinfo_.getfact;
}

list::list(node head, node tail) : head_ (&head), tail_ (&tail)
{ }