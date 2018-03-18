#include "stdafx.h"
#include "CSWoman.h"
#include "ListNode.h"

listNode::listNode(const CSWoman* const woman): 
	woman_(woman)
{
}

listNode::~listNode()
{
	delete woman_;
	delete next_; 
}
