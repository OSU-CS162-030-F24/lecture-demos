#include <iostream>

#include "college_course.hpp"


// Member initializer list
college_course::college_course() :
		name("CS 162"),
		num_students(120),
		students(new student[120]) {
}


college_course::college_course(std::string name, int num_students) :
		name(name),
		num_students(num_students),
		students(new student[num_students]) {
	std::cout << "Outer object" << std::endl;
}

college_course::~college_course() {
	std::cout << "Outer destructor" << std::endl;

	if (this->students != nullptr) {
		delete [] this->students;
	}
	this->students = nullptr;
}


college_course::college_course(const college_course& other) {
	this->name = other.name;
	this->num_students = other.num_students;
	this->students = new student[this->num_students];
	for (int i = 0; i < this->num_students; i++) {
		this->students[i] = other.students[i];
	}
	this->class_president = other.class_president;
}
