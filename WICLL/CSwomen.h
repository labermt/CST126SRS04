#pragma once
#include <iostream>
using namespace std;
class CSwomen
{
private:
	const string name_{};
	const unsigned birthYear_ = {};
	const string fact_{};
public:
	CSwomen(const char* const name, const unsigned birthYear, const char* const fact_);
};
CSwomen::CSwomen(const char* const name, const unsigned birthYear, const char* const fact_)
{

}