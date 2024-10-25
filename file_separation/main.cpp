#include <iostream>


// 1. For every function that is used in a .cpp file, that function must be
// 	declared AT LEAST ONCE within that very .cpp file before it's used
// 2. For every function that is used in a program, that function must be
// 	defined EXACTLY ONCE across the entire program
// 3. For every structure type that is used in a .cpp file, that structure type
// 	must be DEFINED EXACTLY ONCE in that .cpp file before it's used

#include "person.hpp"
#include "hello.hpp"


int main() {
	person p;
	p.name = "Alex Guyer";
	print_person(p);

	say_hello();
}
