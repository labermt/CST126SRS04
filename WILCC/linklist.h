#pragma once
#include "CSWoman.h"


class list
{
public:

private:
	node * head_;
};

class node
{
public:
	node(CSWoman * mynode);
private:
	CSWoman * mynode_;
	CSWoman * next_{};
};