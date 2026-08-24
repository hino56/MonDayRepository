#include<iostream>
using namespace std;

void Judg(int* pNum,int add);

int main(void)
{
	int numbers[5] = { 10,20,30,40,50 };
	int add=0;
	int* pNum;
	pNum = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << *(pNum + i) << endl;
	}
	
	cout << endl;
	cout << "”{‚É‚µ‚½‚¢”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;

	Judg(pNum,add);

	return 0;
}

void Judg(int *pNum, int add)
{
	cin >> add;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << add**(pNum + i) << endl;
	}
}