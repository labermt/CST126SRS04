#pragma once

#include "stdafx.h"
#include "CSWomen.h"
#include <string>

class CSWoman
{
private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

	// ... and other methods  
};
