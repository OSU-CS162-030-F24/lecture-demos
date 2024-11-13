#ifndef PET_HPP
#define PET_HPP

#include <string>

class pet {
// Protected members can be accessed from two places:
// 1. Member functions of the class in which they're declared
// 2. Member functions of "descendents" of the class in which they're declared
protected:
	std::string name = "Spot";
	const std::string species = "Dog";
	const int year_born = 2020;
public:
	pet();

	pet(
		const std::string& name,
		const std::string& species,
		int year_born
	);

	void print_info() const;
};

#endif
