#pragma once
#include "CSWoman.h"

class LinkList
{
private:
	class Node
	{
	public:
		Node* next_;
		CSWoman data_;
	};

	Node * head{ nullptr };

public:
  void reverse(Node* head);
};
