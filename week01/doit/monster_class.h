#pragma once
#include <iostream>
using namespace std;

class character {
public:
	character() : hp(100), power(100) {};

protected:
	int hp;
	int power;
};

class player : public character {
public :
	player() {};
};

class monster {
public:
	monster() {};
	void get_damage(int _damage) {};
	void attack(player target_player) {};
	virtual void attack_special(player target_player);
};

class monster_a : public monster, character {
public:
	virtual void attack_special(player target_player) override;
};

class monster_b : public monster, character {
public:
	virtual void attack_special(player target_player) override;
};

class monster_c : public monster, character {
public:
	virtual void attack_special(player target_player) override;
};

//int main()
//{
//	player player_1;
//
//	monster_a forest_monster;
//	monster_b tutorial_monster;
//	monster_c boss_monster;
//
//	cout << "monster attack " << endl;
//	forest_monster.attack_special(player_1);
//	tutorial_monster.attack_special(player_1);
//	boss_monster.attack_special(player_1);
//
//	return 0;
//}