#include <iostream>

#include "dog.hpp"

dog::dog(const std::string& name, int year_born) :
		pet(name, "Dog", year_born) {}
