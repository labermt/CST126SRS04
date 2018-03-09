#pragma once

#include "stdafx.h"
#include "LinkedList.h"
#include "CSWomen.h"

class LinkedList
{
private:
	class Node
	{
	public:
		Node* next_;
		CSWoman data_;
	};
	Node* head = nullptr;

public:
	static void reverse(Node* head);
	
};
