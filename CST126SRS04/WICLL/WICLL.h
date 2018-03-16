#pragma once
#include <iostream>


class CSWoman
{
private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

	void createList();

	// ... and other methods  
};

class Node
{
private:
	CSWoman woman_;
	CSWoman* next_;
public:
	Node(CSWoman woman, CSWoman* next);
};