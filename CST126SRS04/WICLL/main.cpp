#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{
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

	auto* const ada = new CSWoman("Ada Lovelace", 1815, "Prophet of computer age");
	
	return 0;
}
