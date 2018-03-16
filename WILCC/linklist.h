#pragma once
#include "CSWoman.h"


class node
{
private:
	const CSWoman * const myinfo_ ;
	node * next_{nullptr};

public:
	explicit node(const CSWoman data);
	~node();

	CSWoman getinfo() const;
	node* getnext() const;
	void setnext(node* data);
};

class list
{
private:
	node * head_{};

public:
	void addfunc(CSWoman data);
	void printlist();
	void reverselist();
	void deletelist();
};