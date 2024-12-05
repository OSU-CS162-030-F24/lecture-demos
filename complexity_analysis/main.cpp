#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		// Some O(1) operations here
	}

	// What is the runtime complexity in big O notation of the above
	// for loop?
	//
	// O(n)
	
	for (int i = 0; i < 10; i++) {
		// Some O(1) operations here
	}

	// O(1)
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// Some O(1) operations here
		}
	}

	// O(n^2)
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			// Some O(1) operations here
		}
	}

	// O(n^2)
	
	for (int i = n; i >= 1; i /= 3) {
		// Some O(1) operations here
	}

	// O(log(n))
	
	// In space complexity analysis, you're only interested in the "peak"
	// or "maximum" additional memory allocated by the algorithm at any
	// one point in time
	
	// O(1) -> "Constant complexity"
	// O(log(n)) -> "Logarithmic complexity"
	// O(n) -> "Linear complexity"
	// O(n^2) -> "Quadratic complexity"
	// O(n^anything) -> "Polynomial complexity"
	// O(anything^n) -> "Exponential complexity"
	// O(n log(n)) -> "Linearithmic complexity"
}
