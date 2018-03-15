// WICLL.cpp : Defines the entry point for the console application.
//
 
#include "stdafx.h"
#include <iostream>
#include "CSWoman.h"

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact) : name_(name), birthYear_(birthYear), fact_(fact)
{

}

void CSWoman::TellAboutMyself() const
{
	std::cout << name_ << ", " << birthYear_ << ", " << fact_ << std::endl;
}
