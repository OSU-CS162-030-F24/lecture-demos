#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "player.hpp"

// Abstract class
class monster {
protected:
	int hp = 1;
public:
	monster();
	monster(int hp);

	// Pure virtual function
	virtual void do_turn(player& p) = 0;

	virtual monster* clone() = 0;

	virtual ~monster();
};

#endif
