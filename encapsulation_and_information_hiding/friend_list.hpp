#ifndef FRIEND_LIST_HPP
#define FRIEND_LIST_HPP

#include "person.hpp"

struct friend_list {
	person owner;
	person* friends = nullptr;
	int n_friends = 0;
};

friend_list create_friend_list(const person& owner, int n_friends);
void delete_friend_list(friend_list& list);
void print_friend_list(const friend_list& list);

#endif
