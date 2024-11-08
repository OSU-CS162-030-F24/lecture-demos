#include <iostream>

#include "monster.hpp"

monster::monster() {}

monster::monster(int hp) : hp(hp) {}

void monster::do_turn(player& p) {
	std::cout << "Argh! I'm a generic monster object!" << std::endl;
}
