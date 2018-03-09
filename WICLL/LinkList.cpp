#include "stdafx.h"
#include "LinkList.h"

void LinkList::reverse(Node* head)
{
	Node* prev{ nullptr };
	auto curr{ head };
	while (curr != nullptr)
	{
		const auto next = curr -> next_;
		curr -> next_ = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}
