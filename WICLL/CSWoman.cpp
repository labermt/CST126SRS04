#include "stdafx.h"
#include "CSWoman.h"
#include <iostream>


CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact):
	name_{name}, birthYear_{birthYear},fact_{fact}
{

}

unsigned CSWoman::get_byear() const
{
	return birthYear_;
}

std::string CSWoman::get_fact() const
{
	return fact_;
}

std::string CSWoman::get_name() const
{
	return name_;
}

std::ostream& operator<<(std::ostream&os, const CSWoman& woman)
{
	std::cout << "Name: " << woman.get_name() << "\n";
	std::cout << "Birth Year: " << woman.get_byear() << "\n";
	std::cout << "A Fact about " << woman.get_name() << " is ";
	std::cout << woman.get_fact() << "\n\n";
	return os;
}


