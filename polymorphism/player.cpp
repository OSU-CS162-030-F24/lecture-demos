#include <iostream>

#include "player.hpp"

void player::take_damage(int amount) {
	this->hp -= amount;
	if (this->hp < 0) {
		this->hp = 0;
	}
}

void player::print() const {
	if (this->hp > 0) {
		std::cout << "The player has " << this->hp << " hp" << std::endl;
	} else {
		std::cout << "The player is dead!" << std::endl;
	}
}

bool player::alive() const {
	return this->hp > 0;
}
