#include <iostream>

#include "person.hpp"

int main() {
	person p;
	p.print();
	person p2[5];
	p2[0].print();
}

void person::print() {
	// TODO
	std::cout << this->first_name << " " << this->last_name << ", age " << this->age;
}

void person::initialize(const std::string& first_name, const std::string& last_name, int age) {
	// TODO
}



void print_person(const person& p) {
	std::cout << p.first_name << " " << p.last_name << ", age " << p.age;
}

person create_person(const std::string& first_name, const std::string& last_name, int age) {
	person p;
	p.first_name = first_name;
	p.last_name = last_name;
	p.age = age;
	return p;
}
