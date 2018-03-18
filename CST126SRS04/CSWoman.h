#pragma once
#include "stdafx.h"
#include "CSWoman.h"
#include <string>

class CSWoman
{
private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

	std::string getName() const; 
	unsigned getBirthYear() const; 
	std::string getFact() const; 
};

std::ostream & operator<<(std::ostream & os, CSWoman const & lady);
