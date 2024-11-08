#include <iostream>

#include "player.hpp"
#include "vampire.hpp"
#include "zombie.hpp"

void do_turn(vampire* vampires, int n_vampires, zombie* zombies, int n_zombies, player& p) {
	for (int i = 0; i < n_vampires; i++) {
		vampires[i].do_turn(p);
	}

	for (int i = 0; i < n_zombies; i++) {
		zombies[i].do_turn(p);
	}
}

int main() {
	player p;
	
	// These are hardcoded to simplify the demo, but they could be
	// variable lengths, so we use dynamic arrays
	int n_vampires = 10;
	int n_zombies = 5;
	vampire* vampires = new vampire[n_vampires];
	zombie* zombies = new zombie[n_zombies];

	while (p.alive()) {
		do_turn(vampires, n_vampires, zombies, n_zombies, p);
		p.print();
		std::cout << std::endl;
	}

	delete [] vampires;
	delete [] zombies;
}
