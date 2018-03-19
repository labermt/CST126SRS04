#include "stdafx.h"
#include <cassert>
#include "CSWomen.h"

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact):
	name_{ name ? name : "" }, // nullptr check.
	birthYear_{birthYear},
	fact_{ fact ? fact : "" } // nullptr check.
{
	assert(name != nullptr);
	assert(fact != nullptr);
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

std::ostream& operator<<(std::ostream& os, const CSWoman& woman)
{
	os << "Name: " << woman.getName() << std::endl;
	os << "Birthyear: " << woman.getYear() << std::endl;
	os << "Fact: " << woman.getFact() << std::endl;
	os << std::endl;

	return os;
}
