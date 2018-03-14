#pragma once
#include "CSWoman.h"


class node
{
private:
	const CSWoman * const myinfo_ ;
	node * next_{nullptr};
public:
	node(const CSWoman &data);
	void setnext(node &data);
	void printmyinfo();
};

class list
{
private:
	node * head_{};
public:
	void addfunc(CSWoman &data);
	void printlist();
};