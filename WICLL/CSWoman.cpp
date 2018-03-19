// WICLL.cpp : Defines the entry point for the console application.
//
 
#include "stdafx.h"
#include <iostream>
#include "CSWoman.h"
#include <cassert>

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact) : 
name_(name?name:""), birthYear_(birthYear), fact_(fact?fact:"")
{
	// test for nullptrs on strings. Null strings are undefined. See std::string ctor for const char*.
	assert(name);
	assert(fact);
}

void CSWoman::TellAboutMyself() const
{
	std::cout << name_ << ", " << birthYear_ << ", " << fact_ << std::endl;
}
