#pragma once

class CSWoman;

struct listNode
{
	const CSWoman* const woman_;
	listNode* next_;

	listNode(const CSWoman* const woman);
	~listNode();
};
