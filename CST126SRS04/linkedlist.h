#pragma once 

#include "stdafx.h"
#include "CSWoman.h"
#include "linkedlist.h"
#include <iostream>

class linkedlist 
{ 
public:
	struct node 
	{ 
		friend linkedlist;

	private: 
		node * next_;
		CSWoman const & data_;

	public:
		~node();

	public:
		node(node * next, CSWoman const & data);
		CSWoman const & getData() const; 
		const node* getNext() const; 
	};

public:
	~linkedlist();

private:
	node* head_{ nullptr };

public:
	void add(CSWoman const & cswoman);
	void reverse();
	const node* getHead() const;
};

std::ostream& operator<<(std::ostream&, linkedlist const &);
