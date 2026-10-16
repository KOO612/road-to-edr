#include <windows.h>
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
	SetConsoleOutputCP(CP_UTF8);

	monster_a forest_monster;

	forest_monster.show_location();
	monster_a wood_monster(10, 25);
	wood_monster.show_location();

	return 0;
}