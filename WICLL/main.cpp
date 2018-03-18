#include "Node.h"
#include <iostream>
using namespace std;

#ifndef _NDEBUG
#	define _CRTDBG_MAP_ALLOC
#	include <stdlib.h>
#	include <crtdbg.h>
#endif

void AppendNode(const CSWoman* const woman, Node*& head) 
{
	// This looks like it appends to the end. That will take a long time and not recommended. Singly linked lists prefer appending to the front.
	Node* const node = new Node();

	node->data = woman;
	node->next = nullptr;

	Node* curr = head;

	while (curr->next != nullptr)
	{
		curr = curr->next;
	}

	curr->next = node;
}

void reverse(Node * &head)
{
	Node* prev{ nullptr };
	auto curr{ head };

	while (curr != nullptr)
	{
		const auto next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}

void display(Node* head)
{
	Node* curr = head;

	while (curr != nullptr) 
	{
		curr->data->print();
		curr = curr->next;
	}
}

void deleteList(Node* head)
{
	Node* curr = head;
	Node* temp = nullptr;

	while (curr != nullptr)
	{
		temp = curr;
		curr = curr->next;
		delete temp;
	}
}

int main()
{
	const CSWoman* const woman1 = new const CSWoman("Ada Lovelace", 1815, "prophet of computer age");
	const CSWoman* const woman2 = new const CSWoman("Edith Clarke", 1883, "takes charge");
	const CSWoman* const woman3 = new const CSWoman("Women of ENIAC", 1946, "pioneers");
	const CSWoman* const woman4 = new const CSWoman("Grace Hopper", 1906, "queen of software");
	const CSWoman* const woman5 = new const CSWoman("Evelyn Boyd Granville", 1924, "Race,space, and advocacy");
	const CSWoman* const woman6 = new const CSWoman("Sister Mary Kenneth Keller", 1913, "First female computer science PhD");
	const CSWoman* const woman7 = new const CSWoman("Susan Kare", 1954, "Apple Icon");
	const CSWoman* const woman8 = new const CSWoman("Carol Shaw", 1955, "Atari Game Developer");
	const CSWoman* const woman9 = new const CSWoman("Janese Swanson", 1958, "Likes pink");
	const CSWoman* const woman10 = new const CSWoman("Radia Perlman", 1951, "Mother of the internet");

	Node* head = new Node();

	head->data = woman1; // You should be able to start with an empty list. 
	head->next = nullptr;

	// AppendNode(woman1, head); // and append to the empty list. 
	AppendNode(woman2, head);
	AppendNode(woman3, head);
	AppendNode(woman4, head);
	AppendNode(woman5, head);
	AppendNode(woman6, head);
	AppendNode(woman7, head);
	AppendNode(woman8, head);
	AppendNode(woman9, head);
	AppendNode(woman10, head);

	cout << "\t\tForward..." << endl << endl;

	display(head);

	cout << "\t\tReverse..." << endl << endl;

	reverse(head);
	display(head);

	cout << "\t\tReverse Again?..." << endl << endl;

	// reverse(head); // Extra output not asked for in specification is a violation of class policy. 
	// display(head);

	delete woman10;
	delete woman9;
	delete woman8;
	delete woman7;
	delete woman6;
	delete woman5;
	delete woman4;
	delete woman3;
	delete woman2;
	delete woman1;

	deleteList(head);

#ifndef _NDEBUG // Testing for only WIN32 doesn't test for x64. This will test when debugging. 
	if (_CrtDumpMemoryLeaks())
	{
		cout << "Memory leaks!" << endl;
	}
#endif

	// system("pause"); // No system pause allowed. This disrupts automated testing. 

	return 0;
}
