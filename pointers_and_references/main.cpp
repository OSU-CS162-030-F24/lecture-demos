#include <iostream>

/*
void change_me(bool* x) {
	*x = false;
}
*/

void change_me(bool& x) {
	x = false;
}

// DONT DO THIS
bool* create_true() {
	bool the_bool = true;
	return &the_bool;
}

// Pointers
// References: Simpler syntax, which makes them slightly more limited

int main() {
	// Memory address: A big whole number that represents the location of
	// some data in memory

	// Address-of operator: &
	int number_of_legs = 2;
	std::cout << &number_of_legs << std::endl; // Prints mem addr of number_of_legs
	
	// * used in declaration means "this is a pointer"
	int* ptr = &number_of_legs;
	std::cout << ptr << std::endl;

	// Indirection operator (dereference operator): *
	std::cout << *ptr << std::endl;

	int* ptr2 = nullptr; // Now ptr2 points to nothing

	bool y = true;
	change_me(&y);
	std::cout << y << std::endl; // Prints: 0

	int** ptr3 = &ptr;

	std::cout << **ptr3 << std::endl;

	char my_char = 'C';
	
	char const * ptr4 = &my_char;

	ptr4 = ptr;

	*ptr4 = 'B';

	std::cout << *ptr4 << std::endl;
	*ptr4 = 'B'; // This is now a syntax error
	ptr4 = nullptr;
	
	// A reference is basically a "nickname" for another variable
	const char& ref = my_char;
	
	std::cout << ref << std::endl; // Prints C
	ref = 'B'; // Changes my_char to 'B'
	std::cout << my_char << std::endl; // Prints 'B'

	bool* ptr5 = create_true(); // Dangling pointer
}
