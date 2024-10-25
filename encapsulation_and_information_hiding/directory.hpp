#ifndef DIRECTORY_HPP
#define DIRECTORY_HPP

#include "person.hpp"

struct directory {
	person* people = nullptr;
	int n_people = 0;
};

directory create_directory(int n_people);
void delete_directory(directory& d);
void print_directory(const directory& d);

#endif
