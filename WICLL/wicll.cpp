#include "stdafx.h"
#include <iostream>
#include <string>
#include "wicll.h"

using namespace std;


CSWoman::CSWoman()
{
	head_ = nullptr;
	curr_ = nullptr;
	temp_ = nullptr;
}

void CSWoman::addNode(const string name, const unsigned year, const string fact) 
{
	auto n = new node;  // create a new node pointer called n and creating new node. new poitner points to that.
	n->next = nullptr;
	n->name = name;
	n->birth_year = year;
	n->fact = fact;


	// if there is already a list
	if (head_ != nullptr) 
	{
		curr_ = head_;
		// check to see if it is the last node in the list
		while (curr_->next != nullptr) 
		{
			curr_ = curr_->next; // current pointer points to next until its last node in the list
		}
		curr_->next = n;
	}
	else
	{
		head_ = n;
	}
}

// A space between // and the text helps readability. 
// pass in data and stored in delData
// walk through list until we come across node with value = delData
// delete that node and patch up list

void CSWoman::deleteNode(string del_name) 
{
	nodePtr delPtr = nullptr;
	temp_ = head_;
	curr_ = head_;

	// check to see if curr node is the one we want to delete.
	// temp will trail curr so we can patch node

	while (curr_ != nullptr && curr_->name != del_name)
	{
		temp_ = curr_;
		curr_ = curr_->next;
	}
	if (curr_ == nullptr)
	{
		cout << del_name << " was not in the list\n";
		delete delPtr;
	}
	else
	{
		delPtr = curr_;
		curr_ = curr_->next; // advances curr to next node
		temp_->next = curr_; // patches the the hole in the list
		if (delPtr == head_)
		{
			head_ = head_->next;
			temp_ = nullptr;
		}
		delete delPtr;
		cout << "The person, " << del_name << ", was removed from the list.\n" << endl;;
	}
}

void CSWoman::reverseList()
{
		nodePtr prev = nullptr;
		auto curr = head_;
		while (curr != nullptr)
		{
			const auto next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head_ = prev;
	}

void CSWoman::printList()
{
	curr_ = head_;
	while (curr_ != nullptr)
	{
		cout << "Name: " << curr_->name << endl;
		cout << "Born: " << curr_->birth_year << endl;
		cout << "Fun fact: " << curr_->fact << endl << endl;
		curr_ = curr_->next;
	}
}
