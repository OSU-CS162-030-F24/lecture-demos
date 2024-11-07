#include "student.hpp"
#include "college_course.hpp"

int main() {
	college_course c("CS 261", 5); // This line calls the student default ctor

	foo(c);

	// This does a copy
	college_course c2(c);
	college_course c3 = c;
	
	college_course c4;
	c4 = c3; // This calls the assignment operator
}
