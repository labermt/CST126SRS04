#pragma once

#include "stdafx.h"
#include "LinkedList.h"
#include "CSWomen.h"

class LinkedList
{
private:
	class Node
	{
		friend LinkedList;

		Node* next_;
		CSWoman* data_;

	public:
		Node(Node * next, CSWoman * data);
	};

	Node* head = nullptr;

public:
	static void reverse(Node* head);
};
