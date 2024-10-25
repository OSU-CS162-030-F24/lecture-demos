#include <iostream>

#include "directory.hpp"

directory create_directory(int n_people) {
	directory d;
	d.people = new person[n_people];
	d.n_people = n_people;
	return d;
}

void delete_directory(directory& d) {
	delete [] d.people;
	d.people = nullptr; // This is good practice
	d.n_people = 0;
}

void print_directory(const directory& d) {
	std::cout << "The directory contains the following people: " <<
		std::endl;
	
	for (int i = 0; i < d.n_people; i++) {
		print_person(d.people[i]);
		std::cout << std::endl;
	}
}
