#include <iostream>

#include "player.hpp"
#include "vampire.hpp"
#include "zombie.hpp"

// Polymorphism: A variable that can take on one of many types.
// 	"Many forms"

void do_turn(monster** monsters, int n_monsters, player& p) {
	for (int i = 0; i < n_monsters; i++) {
		monsters[i]->do_turn(p);
	}
}

int main() {
	player p;
	
	// These are hardcoded to simplify the demo, but they could be
	// variable lengths, so we use dynamic arrays
	int n_vampires = 10;
	int n_zombies = 5;
	int n_monsters = n_vampires + n_zombies;
	monster** monsters = new monster*[n_monsters];

	for (int i = 0; i < n_vampires; i++) {
		vampire* v = new vampire;
		monsters[i] = v; // This is upcasting!
	}
	for (int i = n_vampires; i < n_monsters; i++) {
		zombie* z = new zombie;
		monsters[i] = z; // This is upcasting!
	}

	while (p.alive()) {
		do_turn(monsters, n_monsters, p);
		p.print();
		std::cout << std::endl;
	}

	for (int i = 0; i < n_monsters; i++) {
		// delete monsters[i];
	}
	delete [] monsters;
}
