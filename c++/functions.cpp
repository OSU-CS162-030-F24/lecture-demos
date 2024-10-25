#include <iostream>

// Function prototype:
double add(double x1, double x2);

// Declaration: States the existence of something
// Definition: States what something is

void print_hello() {
	std::cout << "Hello, World!" << std::endl;
}

void change_me(bool x[]) {
	x[19] = false;
}

int main() {
	std::cout << add(31.5, 12.7);

	print_hello();

	// Array: A fixed-size, named collection of ordered data of
	// the same type (homogeneous)
	

	// Compile-time constant: Values that are known at compile-time
	bool trues_and_falses[20];
	for (int i = 0; i < 20; i++) {
		trues_and_falses[i] = true;
	}

	change_me(trues_and_falses);

	// Prints the base address of the array
	std::cout << trues_and_falses << std::endl;

	std::cout << trues_and_falses[0] << std::endl; // 0

}

// Function definition. Also a declaration.
double add(double x1, double x2) {
	// Function's body
	return x1 + x2;
}
