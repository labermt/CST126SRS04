#pragma once
#include <ostream>
#include "CSWoman.h"

class link_list
{
public:
	class node 
	{
		friend link_list;

	private:
		node* next_;
		const CSWoman* const data_;

	public:
		const CSWoman* get_data() const;
		node* get_next() const;
		
		node(node* next, const CSWoman* const data);
		~node();
	};

private:
	node* head_{ nullptr };

public:
	~link_list();

public:
	void reverse();
	void add(const CSWoman* const cs_woman);
	const node* get_head() const;
	
};

std::ostream& operator<<(std::ostream&os, const link_list& list);
std::ostream& operator<<(std::ostream&os, const link_list::node& node);