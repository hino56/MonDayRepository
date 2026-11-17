#pragma once
class Enemy
{
private:
	int hp;

public:
	Enemy();
	~Enemy();

	void Damage(int damage);

	int GetHp()const;

	bool IsAlive()const;
};

