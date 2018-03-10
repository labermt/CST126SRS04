#include "stdafx.h"
#include "CSWoman.h"
#include "linkedlist.h"

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact):
	name_{name}, birthYear_{birthYear}, fact_{fact}
{
}

std::ostream & operator<<(std::ostream & os, CSWoman const & lady )
{
	os << lady.getName() << ", " << lady.getBirthYear() << ", " << lady.getFact() << ", " << std::endl;
	return os;
}
