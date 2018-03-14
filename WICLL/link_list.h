#pragma once
#include "cs_woman.h"
#include <ostream>

class cs_woman;

class link_list
{
public:
	class node 
	{
		friend link_list;

	private:
		node* next_;
		cs_woman* data_;

	public:
		const cs_woman* get_data() const;
		const node* get_next() const;
		
		node(node* next, cs_woman* data);
		~node();
	};

private:
	node* head_{ nullptr };

public:
	~link_list();

public:
	void reverse();
	void add(cs_woman* const cs_woman);
	const node* get_head() const;
	
};

std::ostream& operator<<(std::ostream&os, const link_list& list);
std::ostream& operator<<(std::ostream&os, const link_list::node& node);