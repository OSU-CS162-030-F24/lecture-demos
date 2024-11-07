#include <iostream>

#include "pet.hpp"
#include "dog.hpp"

int main() {
	pet p("Tad Cooper", "Dragon", 1472);
	p.print_info();

	std::cout << std::endl;

	dog d("Jeff", 2019);
	d.print_info();
}
