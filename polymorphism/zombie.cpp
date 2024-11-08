#include <iostream>

#include "zombie.hpp"

// Zombies are defaultly constructed as monsters with 5 hp (via the
// nondefault monster constructor)
zombie::zombie() : monster(5) {}

void zombie::do_turn(player& p) {
	// Zombie attacks player for 3 damage
	std::cout << "Argh! I eat brains!" << std::endl;
	p.take_damage(3);
}
