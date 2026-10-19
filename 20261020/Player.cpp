#include "Player.h"
#include <iostream>

Player::Player(string name) :Character(name) {}

void Player::Attack()
{
	cout << "神速　電光石火(逃走)" << endl;
}