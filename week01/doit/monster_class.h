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

	monster_a() {
		cout << "monster a 생성자" << endl;
		monster_a(10, 10);
	};

	monster_a(int x, int y) : location{ x, y } {
		cout << "monster a 생성자 매개변수" << endl;
	};

	void show_location() {
		cout << "위치 " << location[0] << " " << location[1] << endl;
	};
	
	virtual void attack_special(player target_player) override;

private:
	int location[2];
};

class monster_b : public monster, character {
public:
	monster_b(player& attack_target)
		: monster_type("일반"),
		location{ 0,0 },
		unique_id(++total_count),
		target(attack_target) {
		difficult_level = 10;
		quiz = new char[1024];
	};
private:
	string monster_type;
	int location[2];
	static int total_count;
	const int unique_id;
	player& target;
	int difficult_level;
	char* quiz;
};

int monster_b::total_count = 0;

class monster_c : public monster, character {
public:
	virtual void attack_special(player target_player) override;
};
