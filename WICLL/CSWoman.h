#pragma once
#include <iostream>
#include <string>

class CSWoman
{
	private:
		const std::string name_;
		const unsigned birthYear_;
		const std::string fact_;

	public:
		CSWoman(const char* const name, const unsigned birthYear, const char* const fact) : name_(name), birthYear_(birthYear), fact_(fact) {};

		void print()
		{
			std::cout << "CSWoman: " << std::endl;
			std::cout << "\tName: " << name_ << std::endl;
			std::cout << "\tBirthyear: " << birthYear_ << std::endl;
			std::cout << "\tFact: " << fact_ << std::endl;
			std::cout << std::endl;
		}
};

