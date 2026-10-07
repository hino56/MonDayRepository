#include"Game.h"
#include<iostream>

int main(void)
{
	Game game;

	srand((unsigned int)time(NULL));

	game.GameLoop();

	return 0;
}
