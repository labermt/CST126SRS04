#include "stdafx.h"
#include "CSWoman.h"
#include "linklist.h"

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