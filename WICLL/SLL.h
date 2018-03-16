#ifndef SLL_H
#define SLL_H

#include "CSWoman.h"

class Node;
class SLL
{
private:
	Node *head_, *tail_;

public:
	SLL();
	~SLL();
	void addNode(CSWoman* info);
	void reverseSLL();
	void displaySLL() const;
};
#endif

