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

int main() {
	print_hello_n_times(10);

	std::cout << fib(100) << std::endl;
}
