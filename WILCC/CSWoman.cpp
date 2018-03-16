#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "CSWoman.h"
#include "linklist.h"

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact) : name_ (name), birthYear_ (birthYear), fact_ (fact)
{ }

std::string CSWoman::getname() const
{
	return name_;
}

std::string CSWoman::getfact() const
{
	return fact_;
}

unsigned CSWoman::getbirthyear() const
{
	return birthYear_;
}

void CSWoman::printInfo()
{
	std::cout << std::setw(20) << std::left << name_ << " ";
	std::cout << birthYear_ << "\n";
	std::cout << fact_ << "\n\n";
}
