#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

struct person {
	std::string name;
};

void print_person(const person& p);

#endif
