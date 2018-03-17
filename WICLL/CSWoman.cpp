#include "stdafx.h"
#include "CSWoman.h"
using namespace std;


CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact):
	name_(name), birthYear_(birthYear), fact_(fact)
{

}

string CSWoman::get_name_()
{
	return name_;
}
unsigned CSWoman::get_birthYear_() const
{
	return birthYear_;
};
string CSWoman::get_fact_()
{
	return fact_;
}

void CSWoman::PrintCSWoman() const
{
	cout << "Person:  " << get_name_ << endl;
	cout << "Birth Year:  " << get_birthYear_ << endl;
	cout << "Interesting fact:  " << get_fact_ <<  endl;
};




