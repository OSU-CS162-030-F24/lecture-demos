#include <iostream>

#include "person.hpp"

int main() {
	person p;
	p.initialize("John", "Legend", 27);
	p.print();
}

void person::print() const {
	std::cout << this->first_name << " " << this->last_name << ", age " << this->age;
}

void person::initialize(const std::string& first_name, const std::string& last_name, int age) {
	this->first_name = first_name;
	this->last_name = last_name;
	this->age = age;
}

std::string person::get_first_name() const {
	return this->first_name;
}

void person::set_first_name(const std::string& first_name) {
	this->first_name = first_name;
}
