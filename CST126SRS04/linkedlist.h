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
		CSWoman * data_{ nullptr };
	};
	const node* head_{ nullptr };
	//void reverse(node * const head);//may need const before node
	node* reverse(node * const head) const;
	void add(const CSWoman* const cswoman) const;
};