#include <iostream>

#include "pet.hpp"
#include "dog.hpp"

int main() {
	pet p("Tad Cooper", "Dragon", 1472);
	p.print_info();

	std::cout << std::endl;

	dog d("Jeff", 2019, true);
	d.print_info();

	std::cout << std::endl;

	d.pet::print_info();

	// Type casting is when you convert an expression of one type into
	// an expression of another type
	double num = 5;

	std::cout << std::endl;

	// This is legal! It's called upcasting
	pet p2 = d;
	p2.print_info();
	// p2.dog::print_info(); // Syntax error!
	
	// Downcasting? Possible, but not like this! Also, discouraged.
	// dog d2 = p2;
}
