#pragma once
#include "stdafx.h"
class CSWoman;

class linkedList
{
	
	class Node
	{
	public:
		CSWoman * data_;
		Node * next_;
	};
	class List
	{
	private:
		Node * head_, *tail_;
	public:
		List()
		{
			head_ = NULL;
			tail_ = NULL;
		}
		void nodes(CSWoman* val);

	};
};