// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CSWoman.h"
#include "ListNode.h"

#ifndef _NDEBUG
#	define _CRTDBG_MAP_ALLOC
#	include <stdlib.h>
#	include <crtdbg.h>
#endif

using womanCollection = listNode*;

void AddRecord(womanCollection& head, const CSWoman* const woman, const bool firstRecord = false)
{
	if (head == nullptr && !firstRecord)
	{
		std::cout << "Error: 'head' parameter is null when trying to add a record except for the first record." << std::endl;
		return;
	}

	if (woman == nullptr)
	{
		std::cout << "Error: 'woman' parameter is null when trying to add a record." << std::endl;
		return;
	}

	listNode* node = new listNode(woman);

	if (node == nullptr)
	{
		std::cout << "Error: New listNode is null when trying to add a record." << std::endl;
		return;
	}

	node->next_ = head;
	head = node;
}

void AddTheRecords(womanCollection& head)
{
	if (head != nullptr)
	{
		std::cout << "Error: 'head' parameter should be a nullptr when trying to add the records." << std::endl;
		return;
	}

	AddRecord(head, new const CSWoman("Ada Lovelace", 1815, "Prophet of Computer Age"), true);
	AddRecord(head, new const CSWoman("Edith Clarke", 1883, "Keeps Current, Takes Charge"));
	AddRecord(head, new const CSWoman("Grete Hermann", 1901, "Published the foundational paper for computerized algebra"));
	AddRecord(head, new const CSWoman("Radia Perlman", 1951, "Do not Call Me Mother of the Internet"));
	AddRecord(head, new const CSWoman("Grace Hopper", 1906, "Amazing Grace, Queen of Software"));
	AddRecord(head, new const CSWoman("Evelyn Boyd Granville", 1924, "Race, Space, & Education Advocacy"));
	AddRecord(head, new const CSWoman("Sister Mary Kenneth Keller", 1913, "First Female Computer Science PhD"));
	AddRecord(head, new const CSWoman("Susan Kare", 1954, "The Apple Icon"));
	AddRecord(head, new const CSWoman("Carol Shaw", 1955, "Atari Game Developer"));
	AddRecord(head, new const CSWoman("Janese Swanson", 1958, "Can You Make it Pink?"));
}

void DisplayInformationAboutWomen(const womanCollection& head)
{
	if (head == nullptr)
	{
		std::cout << "Error: 'head' parameter is null when trying to display information about a woman." << std::endl;
		return;
	}

	const listNode* loopPtr = head;

	while (loopPtr != nullptr)
	{
		loopPtr->woman_->TellAboutMyself();
		loopPtr = loopPtr->next_;
	}
}

womanCollection Reverse(womanCollection& head)
{
	// A head nullptr is okay. It means the list is empty. That is okay. 
	if (head == nullptr)
	{
		std::cout << "Error: 'head' parameter is null when trying to reverse records." << std::endl;
		return nullptr;
	}

	listNode* prev{ nullptr };
	listNode* curr{ head };

	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next;
	}

	return prev;
}

int main()
{
	womanCollection head = nullptr;
	
	AddTheRecords(head);

	DisplayInformationAboutWomen(head);

	std::cout << std::endl << std::endl;

	head = Reverse(head);

	DisplayInformationAboutWomen(head);

	delete head;

#ifndef _NDEBUG
	_CrtDumpMemoryLeaks();
#endif

	return 0;
}
