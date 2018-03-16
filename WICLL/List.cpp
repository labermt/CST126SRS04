#include "stdafx.h"
#include "List.h"
#include <iostream>

// Class methods
List::List() :
head_{ createList() }
{
	
}

List::~List()
{
	deleteLinkedList(head_);
}

void List::printCSWomen() const
{
	print(head_);
}

void List::reverse()
{
	Node* prev{ nullptr };
	auto cur{ head_ };
	while (cur != nullptr)
	{
		const auto next = cur->getNext();
		cur->setNext(prev);
		prev = cur;
		cur = next;
	}
	head_ = prev;
}

// Static methods
void List::print(const Node* const node)
{
	if (node != nullptr)
	{
		if (node->getWoman() != nullptr)
		{
			auto const woman = node->getWoman();
			std::cout << *woman << std::endl;
		}
		if (node->getNext() != nullptr)
		{
			print(node->getNext());
		}
	}
}

Node* List::createList()
{
	const size_t numNodes{ 10 };
	auto head = new Node(nullptr);
	for(auto i = 0; i < numNodes; i++)
	{
		auto const nextSegment = new Node(head);
		head = nextSegment;
	}

	const CSWoman* const women[numNodes] {
		new CSWoman("Ada Lovelace", 1815, "Programmed Charles Babbage's Analytical Machine"),
		new CSWoman("Edith Clarke", 1883, "Created calculator to determine how power across electricity lines >250 m"),
		new CSWoman("Grace Hopper", 1906, "Created the first compiler & the precursor to COBOL"),
		new CSWoman("Sister Mary Kenneth Keller", 1913, "Helped create the BASIC programming language"),
		new CSWoman("Adele Goldstine", 1920, "Helped make the ENIAC capable of running stored commands"),
		new CSWoman("Evelyn Boyd Granville", 1924, "Performed real-time calculations for satellites"),
		new CSWoman("Jean E. Sammet", 1928, "Created the programming language FORMAC"),
		new CSWoman("Carol Shaw", 1955, "Created first game with non-looping constant terrain despite limitations"),
		new CSWoman("Janese Swanson", 1958, "Game developer who refused to be \"girly\""),
		new CSWoman("Radia Perlman", 1951, "Helped create the STP algorithm, making the internet possible")
	};

	auto curNode = head;
	for (auto woman : women)
	{
		if(woman != nullptr)
		{
			curNode->setWoman(woman);
		}
		if(curNode->getNext() != nullptr)
		{
			curNode = curNode->getNext();
		}
	}
	return head;
}

void List::deleteLinkedList(const Node* const node)
{
	if (node != nullptr)
	{
		if (node->getNext() != nullptr)
		{
			deleteLinkedList(node->getNext());
		}
		delete node->getWoman();
	}
	delete node;
}