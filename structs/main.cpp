#include <iostream>

// Structure type: A user-defined data type that defines a composition
// of other variables

struct baseball {
	std::string signature;
};

struct baseball_player {
	std::string name; // Member variable
	int age = 21; // Default member initializer
	double batting_average; // Member variable
	baseball b; // Composition
};

// Shallow copy
void print_baseball_player(const baseball_player& player) {
	std::cout << player.name << " is age " << player.age << ", and has a batting average of " << player.batting_average << std::endl;
}


int main() {
	// Every baseball player has:
	// Name
	// Age
	// Batting average
	
	baseball_player joe;
	std::cout << joe.age << std::endl;
	
	// Dot operator
	joe.name = "Joe";
	joe.age = 35;
	joe.batting_average = 0.7;
	joe.b.signature = "Sally";
	std::cout << joe.name << " is age " << joe.age << ", and has a batting average of " << joe.batting_average << std::endl;

	// Valid syntax:
	// "Shallow copy"
	baseball_player sally = joe;
	// baseball_player sally;
	// sally.name = joe.name;
	// sally.age = joe.age;
	// sally.batting_average = joe.batting_average;
	
	sally.name = "Sally";
	sally.b.signature = joe.name;
	std::cout << sally.name << std::endl; // Sally
	std::cout << joe.name << std::endl; // Joe

	std::cout << sally.b.signature << std::endl; // Joe

	print_baseball_player(sally);

	baseball_player* p = &sally;
	std::cout << (*p).name << std::endl;
	std::cout << p->name << std::endl;
	
}
