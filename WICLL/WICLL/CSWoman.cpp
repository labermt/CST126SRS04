#include "stdafx.h"
#include <iostream>
#include <string>
#include <cassert>
#include "CSWoman.h"

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact)
	: name_{ name?name:"" }, birthYear_{ birthYear?birthYear:"" }, fact_{ fact?fact:"" }
{
	assert(name);
	assert(fact);
}

// CSWoman::~CSWoman() {}

void CSWoman::print() const
{
	std::cout << name_ << ", " << birthYear_ << ", " << fact_ << std::endl;
}
