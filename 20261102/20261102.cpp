#include<iostream>
using namespace std;

namespace player
{
	void showStatus()
	{
		cout << "繝励Ξ繧､繝､繝ｼ蜷榊燕:Harry" << endl;
	}
}

namespace enemy
{
	void showStatus()
	{
		cout << "謨ｵ縺ｮ蜷榊燕:Ron" << endl;
	}
}

int main(void)
{
	player::showStatus();
	enemy::showStatus();

	return 0;
}