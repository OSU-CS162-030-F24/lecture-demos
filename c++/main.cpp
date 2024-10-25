#include <iostream>
#include <string>

int main() {
	// Code comment: Entry point
	
	/*
	 * Multiline comments
	 *
	 *
	 *
	 */

	std::cout << "Hello, World" << std::endl;

	// Variables
	// Primitive types:
	// int: Integer (whole number). 3
	// float: Floating point number (number). 3.14f
	// double: Double-precision floating point number. 3.14. 3.0
	// char: Character (digits, letters, symbols). 'a', 'A', '@'
	// bool: Boolean. (true or false). true, false

	// int x; // Variable declaration
	// x = 14; // "x gets 14"
	int x = 14 + 7;

	std::cout << (99.0 / 100) << std::endl; // 0.99

	// Arithmetic operators:
	// +
	// -
	// *
	// /
	// %: Remainder after division
	
	std::cout << (9 % 3) << std::endl; // Prints 0

	std::cout << "The value of x is: " << x << std::endl;

	std::string word = "Hello";

	// Standard input / terminal input
	std::cout << "What is your favorite character?: ";
	char favorite_char;
	std::cin >> favorite_char;

	std::cout << "Your favorite character is: " << favorite_char << std::endl;

	// Relational operators:
	// <, >, <=, >=, ==, !=
	
	// Logical operators:
	// or, and, not
	// ||, && (short-circuiting), !
	if (!(favorite_char == 'q' || favorite_char == 'z')) {
		std::cout << "Hey! That's my favorite, too!" << std::endl;
	} 
	
	/*else if (some condition) {
		// Code
	} else if (some other condition) {
		// Code
	} else
	*/

	int counter = 0;
	while (counter < 10) {
		// Some code
		std::cout << "Hello, World!" << std::endl;
		counter = counter + 1;
	}

	int user_input;
	// Scope
	do {
		std::cout << "Hey! Give me a number between 1 and 5!" << std::endl;
		std::cin >> user_input;
	} while (user_input < 1 || user_input > 5);

	std::cout << user_input << std::endl;

	for (int i = 0; i < 10; i = i + 1) {
		// Some code
		std::cout << "Hi" << std::endl;
	}
}
