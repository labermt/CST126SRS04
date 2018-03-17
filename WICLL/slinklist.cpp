#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "slinklist.h"

using namespace std;

class CSWoman;
void SLinkList::NodeCreation(CSWoman* PeopleData)
{
	nodePtr first = new Node(); 
	first->next_ = nullptr;
	first->data_ = PeopleData;

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
void SLinkList::NodeListReverse(Node head)
{
  nodePtr prev{ nullptr };
	auto tail{ head };
	while (tail != nullptr);
	{
		const auto next_ = tail->next_;
		tail->next_ = prev;
		prev = tail;
		tail = next_;
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

