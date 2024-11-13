#include <iostream>

#include "dog.hpp"

dog::dog(const std::string& name, int year_born, bool fixed) :
		pet(name, "Dog", year_born),
		fixed(fixed) {}

void dog::print_info() const {
	// Print the dog's pet information
	// this->pet::print_info();
	std::cout << "Name: " << this->name << std::endl;
	
	// Print the dog's dog information
	std::cout << "Fixed?: " << (this->fixed ? "Yes!" : "No!") << std::endl;
}
