#include "Node.h"
#include <iostream>
using namespace std;

void AppendNode(CSWoman* woman, Node* head) 
{
	Node* node = new Node();

	node->data = woman;
	node->next = nullptr;

	Node* curr = head;

	while (curr->next != nullptr)
	{
		curr = curr->next;
	}

	curr->next = node;
}

void reverse(Node* &head)
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
	CSWoman* woman1 = new CSWoman("Ada Lovelace", 1815, "prophet of computer age");
	CSWoman* woman2 = new CSWoman("Edith Clarke", 1883, "takes charge");
	CSWoman* woman3 = new CSWoman("Women of ENIAC", 1946, "pioneers");
	CSWoman* woman4 = new CSWoman("Grace Hopper", 1906, "queen of software");
	CSWoman* woman5 = new CSWoman("Evelyn Boyd Granville", 1924, "Race,space, and advocacy");
	CSWoman* woman6 = new CSWoman("Sister Mary Kenneth Keller", 1913, "First female computer science PhD");
	CSWoman* woman7 = new CSWoman("Susan Kare", 1954, "Apple Icon");
	CSWoman* woman8 = new CSWoman("Carol Shaw", 1955, "Atari Game Developer");
	CSWoman* woman9 = new CSWoman("Janese Swanson", 1958, "Likes pink");
	CSWoman* woman10 = new CSWoman("Radia Perlman", 1951, "Mother of the internet");

	Node* head = new Node();

	head->data = woman1;
	head->next = nullptr;

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

	reverse(head);
	display(head);

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

#ifdef _WIN32

	if (_CrtDumpMemoryLeaks())
	{
		cout << "Memory leaks!" << endl;
	}

#endif

	system("pause");
	return 0;
}






	
