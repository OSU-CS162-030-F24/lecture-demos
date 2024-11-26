#include "linked_list.hpp"


void linked_list::push_back(int value) {
	node* new_node = new node;
	new_node->value = value;

	if (this->head == nullptr) {
		// The list is empty
		this->head = new_node;
	} else {
		// The list is NOT empty
		node* itr = this->head;
		while (itr->next != nullptr) {
			// Take one step down the list
			itr = itr->next;
		}

		itr->next = new_node;
	}
}
