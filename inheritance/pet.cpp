#include <iostream>

#include "pet.hpp"

pet::pet() {
	std::cout << "Pet ctor" << std::endl;
}

pet::pet(
	const std::string& name,
	const std::string& species,
	int year_born) :
		name(name),
		species(species),
		year_born(year_born) {}

void pet::print_info() const {
	std::cout << "Name: " << this->name << std::endl <<
		"Species: " << this->species << std::endl <<
		"Born in: " << this->year_born << std::endl;
}
