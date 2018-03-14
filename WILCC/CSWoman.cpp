#include "stdafx.h"
#include "CSWoman.h"
#include "linklist.h"
#include <string>
#include <iostream>

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact) : name_ (name), birthYear_ (birthYear), fact_ (fact)
{ }

std::string CSWoman::getname()
{
	return name_;
}

std::string CSWoman::getfact()
{
	return fact_;
}

unsigned CSWoman::getbirthyear()
{
	return birthYear_;
}

void CSWoman::printInfo()
{
	std::cout << name_;
	std::cout << birthYear_;
	std::cout << fact_;
}
