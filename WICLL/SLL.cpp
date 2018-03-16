#include "stdafx.h"

#include <iostream>

#include "SLL.h"
#include "Node.h"

SLL::SLL():
	head_{nullptr}, tail_{nullptr}
{}
SLL::~SLL()
{
	auto * curr = head_;

	while(curr != nullptr)
	{
		if (curr == tail_)
		{
			delete curr;
			curr = nullptr;
			tail_ = nullptr;
		}
		else
		{
			auto * temp = curr;
			curr = curr->next_;
			delete temp;
		}
	}

	head_ = nullptr;
}
void SLL::addNode(CSWoman* info)
{
	auto * newWoman = new Node;

	if(head_ == nullptr) //Add to Empty List
	{
		newWoman->info_ = info;
		newWoman->next_ = nullptr;
		head_ = newWoman;
		tail_ = newWoman;
	}
	else //Add to List
	{
		auto * temp = new Node;
		temp->info_ = info;
		temp->next_ = nullptr;
		tail_->next_ = temp;
		tail_ = temp;
	}
}
void SLL::reverseSLL()
{
	Node* prev = nullptr;
	auto curr = head_;

	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next;
	}

	head_ = prev;
}
void SLL::displaySLL() const
{
	auto * travel = head_;

	while (travel != nullptr)
	{
		std::cout << travel->getInfo()->getName() << ' ' << travel->getInfo()->getBirth() << ' ' << travel->getInfo()->getFact() << ' ' << std::endl;

		travel = travel->next_;
	}

	std::cout << std::endl;
}