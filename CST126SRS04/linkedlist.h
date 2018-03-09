#pragma once 
#include "stdafx.h"
#include "CSWoman.h"
#include "linkedlist.h"
#include <iostream>

class linkedlist
{
private:
	class node
	{
		node * next_;
		CSWoman * data_{ nullptr };
	};
	void reverse(node * const head);//may need const before node
	void add(const CSWoman* const cswoman);
};