#pragma once
#include "CSWoman.h"

class Node
{
private:
	Node* next_;
	const CSWoman* woman_;

public:
	Node(Node* const next);

	Node* getNext() const;
	void setNext(Node* const next);
	const CSWoman* getWoman() const;
	void setWoman(const CSWoman* const woman);
};