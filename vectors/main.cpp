#include <iostream>
#include <vector>

int main() {
	// std::vector<double> my_numbers; // Default ctor, empty
	// std::vector<double> my_numbers(5); // Nondefault ctor, starts with 5 doubles
	std::vector<double> my_numbers(5, 10.2); // Nondefault ctor, starts with 5 doubles

	// 2D vector of rooms
	// std::vector<room> example_row(12);
	// std::vector<std::vector<room>> cave(10, example_row);

	my_numbers.push_back(3.14);
	my_numbers.push_back(9.81);
	my_numbers.push_back(-3.14);

	// [] does NOT provide bounds checking
	// .at() DOES provide bounds checking
	// std::cout << my_numbers[0] << std::endl; // Prints 3.14
	// std::cout << my_numbers.at(0) << std::endl; // Prints 3.14

	// my_numbers.at(0) = 5;
	
	// Iterators: An object that represents the location of an element
	// in an STL container
	my_numbers.erase(my_numbers.begin() + 1);
	for (int i = 0; i < my_numbers.size(); i++) {
		std::cout << my_numbers.at(i) << std::endl;
	}

	my_numbers.clear();

	std::cout << my_numbers.capacity() << std::endl;
	my_numbers.reserve(1000);
}
