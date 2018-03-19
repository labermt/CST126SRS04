#include "stdafx.h"
#include <cassert>
#include "CSWoman.h"

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact):
	name_{ name?name:"" }, birthYear_{birthYear}, fact_{fact?fact:""}
{
	assert(name != nullptr);
	assert(fact != nullptr);
}

std::string CSWoman::getName() const
{
	return name_;
}

unsigned CSWoman::getBirthYear() const
{
	return birthYear_;
}

std::string CSWoman::getFact() const
{
	return fact_; 
}

std::ostream & operator<<(std::ostream & os, CSWoman const & lady )
{
	os << lady.getName() << ", " << lady.getBirthYear() << ", " << lady.getFact() << std::endl;
	return os;
}
