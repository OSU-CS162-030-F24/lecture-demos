#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

// A class is basically a structure type, but its members are private
// by default

// An "object" is a variable whose type is a class

// Member functions "belong" to objects of a class. Member functions of a class
// are allowed to access the other private members of said class
class person {
	std::string first_name;
	std::string last_name;
	int age = 0;

	void print();

	void initialize(const std::string& first_name, const std::string& last_name, int age);
};
 
#endif
