#include <iostream>
#include <fstream> // File stream

int main() {
	std::ofstream file;
	file.open("hello.txt", std::ofstream::app);
	file << "Hello, World!" << std::endl;
	file.close();

	std::ifstream in_file;
	in_file.open("data.txt");
	if (in_file.is_open()) {
		std::string name;
		in_file >> name;

		int age;
		in_file >> age;

		double number;
		in_file >> number;

		std::cout << name << ", " << age << ", " << number << std::endl;
	} else {
		std::cout << "Error! Failed to open the file!" << std::endl;
		in_file.clear();
	}
}
