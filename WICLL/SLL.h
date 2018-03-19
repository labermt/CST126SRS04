#ifndef SLL_H
#define SLL_H

#include "CSWoman.h"

class Node;

class SLL
{
private:
	Node * head_;

public:
	SLL();
	~SLL();
	void addNode(CSWoman const * const info);
	void reverseSLL();
	void displaySLL() const;
};
#endif

