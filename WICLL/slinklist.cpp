#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "slinklist.h"

using namespace std;

class CSWoman;

void SLinkList::NodeCreation(CSWoman* peopleData)
{
	Node* first = new Node(peopleData); 
	first->next_ = nullptr;
	first->data_ = peopleData;

	if (head != nullptr)
	{
		tail = head;
		while(tail->next_ != nullptr)
		{
			tail = tail->next_;
		}
		tail->next_ = PeopleData;
	}
	else
	{
		head = PeopleData;
	};
};

void SLinkList::NodeListReverse(Node* head)
{
	Node* prev{ nullptr };
	auto curr{ head };
	while (curr != nullptr);
	{
		const auto next_ = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next_;
	}
	head = prev;
}

void SLinkList::DeleteNode(char DeleteData)
{
	nodePtr DPtr = nullptr;
	temp = head;
	tail = head;

	while (tail != nullptr && tail-> data_ !=DeleteData)
	{
		temp = tail;
		tail = tail->next_;
	}
	if(tail == nullptr)
	{
		delete DPtr;
	}
	else
	{
		DPtr = tail;
		tail = tail->next_;
		temp-> = tail;
		if(DPtr == head)
		{
			head = head->next_;
			temp = nullptr;
		}
		delete DPtr;
	};
};
