#ifndef DOG_HPP
#define DOG_HPP

#include "pet.hpp"

// This is called inheritance
// The dog class is called the "child" class, or the "derived" class, or the
// 	"subclass"
// The pet class is called the "parent" class, or the "base" class, or the
// 	"superclass"

// Inheritance creates an "is-a" relationship
class dog : public pet {
private:
	bool fixed;
public:
	dog(const std::string& name, int year_born, bool fixed);

	// Override the print_info function:
	void print_info() const;
};

#endif
