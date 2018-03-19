#ifndef NODE_H
#define NODE_H

#include "CSWoman.h"

class Node {

	friend class SLL;

private:
	const CSWoman * const info_;
	Node* next_;

public:
//	Node();
//	Node(CSWoman* info);
	Node(CSWoman const * const info, Node* next);

	const CSWoman* getInfo() const;
};
#endif
