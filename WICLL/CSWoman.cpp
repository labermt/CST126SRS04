#include "stdafx.h"
#include "CSWoman.h"

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact) :
	name_{ name },
	birthYear_{ birthYear },
	fact_{ fact }
{

}

std::ostream& operator<<(std::ostream& os, const CSWoman& woman)
{
	os << woman.name_ << ", " << woman.birthYear_ << ", " << woman.fact_;
	return os;
}