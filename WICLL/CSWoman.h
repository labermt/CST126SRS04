#ifndef CSWOMAN_H
#define CSWOMAN_H

#include <string>

class CSWoman {

private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

	std::string getName() const;
	unsigned getBirth() const;
	std::string getFact() const;
};

#endif
