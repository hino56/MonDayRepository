#include<iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 10,20,30,40,50 };
	int* ary;

	ary = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << *(ary + i) << endl;
	}

	return 0;
}