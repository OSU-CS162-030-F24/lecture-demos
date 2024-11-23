#include <iostream>
#include "array.hpp"

template<typename T>
T add(T a, T b) {
	return a + b;
}

// Template instantiation always happens at compile time
int main() {
	array<12, bool> my_array;
	my_array.at(0) = true;
	my_array.at(1) = false;
	my_array.at(2) = false;
	my_array.at(3) = true;

	array<5, double> my_array2;

	std::cout << my_array.at(1) << std::endl;

	std::cout << add(1.0, 3.0) << std::endl;
	std::cout << add(1, 3) / 5 << std::endl; // Prints 0
}
