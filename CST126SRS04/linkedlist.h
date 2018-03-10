#pragma once 
#include "stdafx.h"
#include "CSWoman.h"
#include "linkedlist.h"
#include <iostream>

class linkedlist
{
private:
	struct node
	{
		node * next_;
		CSWoman const * const data_{ nullptr };

	public:
		node(node * next, CSWoman const * const data);
	};
	node* head_{ nullptr };
	node* reverse(node * const head) const;

public:
	void add(CSWoman const * const cswoman);
};