#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "monster.hpp"

class zombie : public monster {
public:
	zombie();

	void do_turn(player& p);
};

#endif
