#pragma once
#include "CSWoman.h"

class LinkList
{
private:
	class Node 
	{
		friend LinkList;

	private:
		Node* next_;
		CSWoman* data_;

	public:
		Node(Node* next, CSWoman* data);
	};

	Node * head_{ nullptr };

public:
	// set note to pass in pointer ref
	static void reverse(Node* head);
};
