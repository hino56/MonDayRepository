#pragma once

class Player
{
public:
	/*void showAttack();
	void showDefense();
	void showHeal();*/

	int PlayerInput();

	int hp = 100;
};

namespace player
{
	void showAttack();
	void showDefense();
	void showHeal();
}