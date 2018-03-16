#pragma once
#include "CSWoman.h"
#ifndef _SLL_H_
class SLinkList
{
private:
typedef class Node
	{
	friend SLinkList;
	friend CSWoman;
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
	friend CSWoman;
	void NodeCreation(CSWoman* PeopleData);
	void NodeInsertion(Node MyCSWomen);
	void NodeListPrint(char PrintData);
	void NodeListReverse(Node head);
	void DeleteNode(char DeleteData);
	void PrintReverse(char ReversePrint);
};
#endif
