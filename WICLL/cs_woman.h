#pragma once
#include "stdafx.h"
#include <string>

class cs_woman
{
private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;

public:
	cs_woman(const char* const name, const unsigned birthYear, const char* const fact);
	std::string get_name() const;
	unsigned get_byear() const;
	std::string get_fact() const ;
};

std::ostream& operator<<(std::ostream&os, const cs_woman& woman);