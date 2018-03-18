#include "stdafx.h"
#include "CSWoman.h"

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact):
	name_{name}, birthYear_{birthYear}, fact_{fact}
{
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
