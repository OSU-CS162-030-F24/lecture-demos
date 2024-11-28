#include <iostream>

void print_hello_n_times(int n) {
	// Base case
	if (n == 0) {
		return;
	}

	std::cout << "Hello, World!" << std::endl;
	print_hello_n_times(n - 1); // Recursive call
}

// 0 1 1 2 3 5 8 13 21 34

int fib(int n) {
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}

	return fib(n-1) + fib(n-2);
}

// Every function call has its own "stack frame"

// Write a function called print_x(n) that prints an X
// to the terminal made up of a bunch of *'s of height n

/*
 * print_x(7) should print the following:
 *
 *    *   *
 *     * *
 *      *
 *     * *
 *    *   *
 *
 */

void print_x(int height, int padding) {
	if (height == 1) {
		// Print an x of height 1
		for (int i = 0; i < padding; i++) {
			std::cout << ' ';
		}
		std::cout << '*';
		std::cout << std::endl;

		return;
	}

	// Print the padding before the top row
	for (int i = 0; i < padding; i++) {
		std::cout << ' ';
	}
	// Print the first asterisk in the top row
	std::cout << '*';
	// Print all of the spaces in the top row
	for (int i = 0; i < height - 2; i++) {
		std::cout << ' ';
	}
	// Print the second asterisk in the top row
	std::cout << '*';
	std::cout << std::endl;

	print_x(height - 2, padding + 1); // Recursive call

	// Print the padding before the bottom row
	for (int i = 0; i < padding; i++) {
		std::cout << ' ';
	}
	// Print the first asterisk in the bottom row
	std::cout << '*';
	// Print all of the spaces in the bottom row
	for (int i = 0; i < height - 2; i++) {
		std::cout << ' ';
	}
	// Print the second asterisk in the bottom row
	std::cout << '*';
	std::cout << std::endl;
}

int main() {
	print_hello_n_times(10);

	// std::cout << fib(1) << std::endl;

	print_x(5, 0);
}
