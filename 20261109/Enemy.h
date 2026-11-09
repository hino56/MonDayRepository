#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Draw()const;

	int GetHp()const;

private:
	int Hp = 100;
};

