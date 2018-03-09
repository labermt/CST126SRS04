#pragma once
#include "CSWoman.h"

class linklist
{
private:
	class Node
	{
	private:
		Node * next_{ nullptr };
		CSWoman data_;
	};
	Node * head{ nullptr };
public:
	void reverse( Node* head );
};
