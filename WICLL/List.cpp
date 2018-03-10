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
			const auto woman = node->getWoman();
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
	Node* const nodeArray[numNodes] {
		new Node(nullptr, new CSWoman("Ada Lovelace", 1815, "Programmed Charles Babbage's Analytical Machine")),
		new Node(nullptr, new CSWoman("Edith Clarke", 1883, "Created calculator to determine how power across electricity lines >250 m")),
		new Node(nullptr, new CSWoman("Grace Hopper", 1906, "Created the first compiler & the precursor to COBOL")),
		new Node(nullptr, new CSWoman("Sister Mary Kenneth Keller", 1913, "Helped create the BASIC programming language")),
		new Node(nullptr, new CSWoman("Adele Goldstine", 1920, "Helped make the ENIAC capable of running stored commands")),
		new Node(nullptr, new CSWoman("Evelyn Boyd Granville", 1924, "Performed real-time calculations for satellites")),
		new Node(nullptr, new CSWoman("Jean E. Sammet", 1928, "Created the programming language FORMAC")),
		new Node(nullptr, new CSWoman("Carol Shaw", 1955, "Created first game with non-looping constant terrain despite limitations")),
		new Node(nullptr, new CSWoman("Janese Swanson", 1958, "Game developer who refused to be \"girly\"")),
		new Node(nullptr, new CSWoman("Radia Perlman", 1951, "Helped create the STP algorithm, making the internet possible"))
	};
	for (auto i = 0; i < numNodes - 1; i++)
	{
		if(nodeArray[i] != nullptr)
		{
			nodeArray[i]->setNext(nodeArray[i + 1]);
		}
	}
	return nodeArray[0];
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