#include <iostream>
#include <string>
#include <iterator>
#include <array>
#include <vector>
#include "monster_class.h"

using namespace std;

void monster::attack_special(player target_player)
{
	cout << "기본 공격 : damage - 10 hp" << endl;
}

void monster_a::attack_special(player target_player)
{
	cout << "인텡글 공격 : damage -15 hp" << endl;
}

void monster_b::attack_special(player target_player)
{
	cout << "가상공격 : damage -0 hp" << endl;
}

void monster_c::attack_special(player target_player)
{
	cout << "강력 뇌전 공격 : damage - 100 hp" << endl;
}

int main()
{
	player player_1;

	monster_a forest_monster;

	monster& mon = forest_monster;
	monster_a& mon_a = forest_monster;

	monster_b tutorial_monster;
	monster_c boss_monster;

	cout << "monster attack " << endl;
	forest_monster.attack_special(player_1);
	tutorial_monster.attack_special(player_1);
	boss_monster.attack_special(player_1);


	cout << endl << "defaulst attack" << endl;
	forest_monster.monster::attack_special(player_1);
	tutorial_monster.monster::attack_special(player_1);
	boss_monster.monster::attack_special(player_1);

	cout << endl << "parent attack" << endl;
	mon.attack_special(player_1);

	cout << endl << "child attack" << endl;
	mon_a.attack_special(player_1);
	return 0;
}