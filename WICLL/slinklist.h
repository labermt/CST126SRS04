#pragma once
#include "CSWoman.h"
//slinked list (reverse)
//slinked list print
//node print
// node add
class SLinkList
{
private:
typedef class Node
	{
	friend SLinkList;
	private:
		Node* next_;
		const CSWoman data_;
	public: 
		Node(Node* next_, CSWoman* data_);
	}* nodePtr;

	nodePtr head = nullptr;
	nodePtr tail = nullptr;
	nodePtr temp = nullptr;

public:

	void NodeCreation(CSWoman* PeopleData);
	void NodeInsertion(Node MyCSWomen);
	void NodeListPrint(char PrintData);
	void NodeListReverse(Node head);
	void DeleteNode(char DeleteData);
	void PrintReverse(char ReversePrint);
};
