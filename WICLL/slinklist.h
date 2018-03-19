#pragma once
#include "CSWoman.h"
#ifndef _SLL_H_
class SLinkList
{
private:
	class Node
	{
	friend SLinkList;
	private:
		Node* next_;
		const CSWoman data_;
	public: 
		Node(Node* next_, CSWoman* data_);
	};

	Node* head = nullptr;

public:
	void NodeCreation(CSWoman* PeopleData);
	void NodeInsertion(Node MyCSWomen);
	void NodeListPrint(char PrintData);
	void NodeListReverse(Node head);
	void DeleteNode(char DeleteData);
	void PrintReverse(char ReversePrint);
};
#endif
