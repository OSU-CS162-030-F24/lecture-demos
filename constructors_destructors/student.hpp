#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class student {
	std::string name;
public:
	student();
	student(const std::string& name);
	~student();
};

#endif
