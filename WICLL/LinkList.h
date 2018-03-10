#pragma once
#include "CSWoman.h"

class LinkList
{
public:
	class Node 
	{
		friend LinkList;

	private:
		Node* next_;
		CSWoman* data_;

	public:
		Node(Node* next, CSWoman* data);
		const CSWoman* get_data() const;
		const Node* get_next() const;
		~Node();
	};

private:
	Node* head_{ nullptr };

public:
	~LinkList();

public:
	void reverse();
	void add(CSWoman* const cs_woman);
	const Node* get_head() const;
	
};

std::ostream& operator<<(std::ostream&os, const LinkList& list);
std::ostream& operator<<(std::ostream&os, const LinkList::Node& node);
