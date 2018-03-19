#include "stdafx.h"
#include <iostream>
#include "Node.h"
#include "SLL.h"

SLL::SLL():
	head_{nullptr} //, tail_{nullptr}
{}

SLL::~SLL()
{
	auto * curr = head_;

	while(curr != nullptr)
	{
		delete curr;
		curr = nullptr;
	}

	head_ = nullptr;
}
void SLL::addNode(CSWoman const * const info)
{
	head_ = new Node(info, head_);
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
