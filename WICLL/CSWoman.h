#pragma once
#include <iostream>

using namespace std;

class CSWoman
{
private:
	const string name_;
	const unsigned birthYear_;
	const string fact_;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);
	string get_name_();
	unsigned get_birthYear_() const;
	string get_fact_();
	void PrintCSWoman(char Person) const;

};
