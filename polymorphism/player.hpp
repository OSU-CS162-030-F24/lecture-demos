#ifndef PLAYER_HPP
#define PLAYER_HPP

class player {
private:
	int hp = 100;
public:
	void take_damage(int amount);
	void print() const;
	bool alive() const;
};

#endif
