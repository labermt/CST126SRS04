#pragma once
#include "CSWoman.h"


class node
{
private:
	const CSWoman * const myinfo_ ;
	CSWoman * next_{nullptr};
public:
	node(const CSWoman data);
	void setnext(CSWoman data);
	void getmyinfo();
};

class list
{
private:
	node * head_{};
	node * tail_{};
public:
	list(node head, node tail);
};