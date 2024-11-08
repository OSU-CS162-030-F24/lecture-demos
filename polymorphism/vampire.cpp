#include <iostream>

#include "vampire.hpp"

// Vampires are defaultly constructed as monsters with 10 hp (via the
// nondefault monster constructor)
vampire::vampire() : monster(10) {}

void vampire::do_turn(player& p) {
	// Vampire attacks player for 2 damage and heals itself by 1 hp
	std::cout << "I vant to suck your blood!" << std::endl;
	p.take_damage(2);
	this->hp += 1;
}
