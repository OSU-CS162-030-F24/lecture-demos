#include <iostream>

int* create_array() {
	int* array = new int[10];
	return array;
}

int main() {
	// Regular arrays, aka "statically allocated" arrays
	// Arrays with "automatic storage duration"
	int size = 10;
	double* p = new double[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// 1. Make a new array that's bigger
	// 2. Copy elements from the old array to the new array
	// 3. Store your new element(s) at the end of the new array
	
	std::cout << "What's your favorite number?: ";
	int favorite_number;
	std::cin >> favorite_number;

	// All variables have "automatic storage duration".
	// -> All variables are stored on "the stack".
	// The stack is LIFO (last-in, first-out)

	// You can allocate data with "dynamic storage duration".
	// -> This data is allocated on "the heap"

	if (favorite_number == 5) {
		double* pointer = new double[size + 1];
		for (int i = 0; i < size; ++i) {
			pointer[i] = p[i];
		}
		delete [] p;
		size++;

		// Memory leak: When you forget to delete your dyn mem

		p = pointer;
		p[size - 1] = 5;
	}

	std::cout << p[10] << std::endl;

	// Rules of freeing dynamic memory
	// 1. You must do it
	// 2. You must not do it before you're done with it
	// 3. Don't do it twice
	delete [] p;
	// delete [] p; // Double free! Undefined behavior.
	
	int* my_array = create_array();
	my_array[0] = 100;
	delete [] my_array;
}
