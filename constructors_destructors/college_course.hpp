#ifndef COLLEGE_COURSE_HPP
#define COLLEGE_COURSE_HPP

#include "student.hpp"

class college_course {
	std::string name;
	int num_students;
	student* students;
	student class_president;
public:
	// Constructors DON'T have return types
	// A constructor's name MUST be the name of its class
	// Default constructors are constructors with no parameters
	college_course();

	college_course(std::string name, int num_students);

	college_course(const college_course& other);

	college_course& operator=(const college_course& other);

	// Destructors have NO return type and NO parameters
	// A destructor's name MUST be the name of its class, prefixed with
	// a tilde (~)
	~college_course();
};

#endif
