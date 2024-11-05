#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

// A class is basically a structure type, but its members are private
// by default

// An "object" is a variable whose type is a class

// Member functions "belong" to objects of a class. Member functions of a class
// are allowed to access the other private members of said class
class person {
private:
	std::string first_name;
	std::string last_name;
	int age = 0;
public:
	void print() const;

	void initialize(const std::string& first_name, const std::string& last_name, int age);

	// Accessors and mutators
	// (Getters and setters)
	std::string get_first_name() const;
	void set_first_name(const std::string& first_name);
};
 
#endif
