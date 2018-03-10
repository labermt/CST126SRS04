#include "stdafx.h"

#include "CSWomen.h"

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact):
	name_{name}, 
	birthYear_{birthYear},
	fact_{fact}
{
}

std::string CSWoman::getName() const
{
	return name_;
}

unsigned CSWoman::getYear() const
{
	return birthYear_;
}

std::string CSWoman::getFact() const
{
	return fact_;
}

std::ostream & operator<<(std::ostream & os, const CSWoman & woman)
{
	os << "Name: " << woman.getName() << std::endl;
	os << "Birthyear: " << woman.getYear() << std::endl;
	os << "Fact: " << woman.getFact() << std::endl;
	os << std::endl;
	return os;
}
