#pragma once
#include <string>

class CSWoman
{
private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;
	CSWoman* next_woman_ = nullptr;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

	CSWoman() = default;

	// ... and other methods
	std::string getName();
	unsigned getBirthYear();
	std::string getFact();

	void setNextWoman(CSWoman* nextWoman);
	CSWoman* getNextWoman();

	void TellAboutMyself() const;

};