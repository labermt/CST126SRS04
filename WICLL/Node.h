#pragma once
#include "CSWoman.h"

class Node
{
private:
	Node* next_;
	const CSWoman* const woman_;

public:
	Node(Node* const next, const CSWoman* const woman);

	Node* getNext() const;
	void setNext(Node* const next);
	const CSWoman* getWoman() const;
};