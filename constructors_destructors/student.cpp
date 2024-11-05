#include <iostream>

#include "student.hpp"


student::student() {
	std::cout << "Inner object" << std::endl;
}

student::student(const std::string& name) : name(name) {}

student::~student() {
	std::cout << "Inner destructor" << std::endl;
}
