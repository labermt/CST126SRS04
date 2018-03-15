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
	void nodeCreation(int value)
	{
		Node* interimPtr = new Node;
		interimPtr->CSWomen = value;
		interimPtr->next = nullptr;
		if (head==nullptr)
		{
			head = interimPtr;
			tail = interimPtr;
			interimPtr = nullptr;
		}
	}
public:
	void reverse{ Node* head }
	{
		Node*prev{ nullptr };
		auto curr{ head };
		while (curr!= nullptr);
		{
			const auto next = curr->next_;
			curr->next_ = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
	};
};
