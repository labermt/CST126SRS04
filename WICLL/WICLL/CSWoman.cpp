#include "stdafx.h"
#include <iostream>
#include <string>
#include "CSWoman.h"

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact)
	: name_{ name }, birthYear_{ birthYear }, fact_{ fact }
{

}

// CSWoman::~CSWoman() {}

void CSWoman::print() const
{
	std::cout << name_ << ", " << birthYear_ << ", " << fact_ << std::endl;
}
