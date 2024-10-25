#include <iostream>

#include "person.hpp"

// Function definition. Also a declaration
void print_person(const person& p) {
	std::cout << "The person's name is " << p.name << std::endl;
}
