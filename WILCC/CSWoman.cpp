#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "CSWoman.h"

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact) : name_ (name), birthYear_ (birthYear), fact_ (fact)
{ }

void CSWoman::printInfo()
{
	std::cout << std::setw(20) << std::left << name_;
	std::cout << birthYear_ << "\n";
	std::cout << fact_ << "\n\n";
}
