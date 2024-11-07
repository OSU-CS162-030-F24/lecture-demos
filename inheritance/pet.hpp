#ifndef PET_HPP
#define PET_HPP

#include <string>

class pet {
private:
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
