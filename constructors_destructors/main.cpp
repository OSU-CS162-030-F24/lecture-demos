#include "student.hpp"
#include "college_course.hpp"

int main() {
	college_course c("CS 261", 5); // This line calls the student default ctor

	// This does a shallow copy
	college_course c2(c);
	
	college_course c3;
	c3 = c2;
}
