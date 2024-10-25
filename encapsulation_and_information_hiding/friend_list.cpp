#include <iostream>

#include "friend_list.hpp"

friend_list create_friend_list(const person& owner, int n_friends) {
	friend_list list;
	list.owner = owner;
	list.friends = new person[n_friends];
	list.n_friends = n_friends;
	return list;
}

void delete_friend_list(friend_list& list) {
	delete [] list.friends;
	list.friends = nullptr;
	list.n_friends = 0;
}

void print_friend_list(const friend_list& list) {
	std::cout << "Friends of ";
	print_person(list.owner);
	std::cout << ":" << std::endl;

	for (int i = 0; i < list.n_friends; i++) {
		std::cout << " - ";
		print_person(list.friends[i]);
		std::cout << std::endl;
	}
}
