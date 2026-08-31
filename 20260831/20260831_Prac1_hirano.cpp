#include <iostream>
#include <string>
#include"20260831_Prac1_hirano.h"
using namespace std;

std::string accountHolder; // 口座名義人
double balance;            // 残高

BankAccount::BankAccount(const string& holder, double initialBalance)
	: accountHolder(holder), balance(initialBalance) {
}

double BankAccount::getBalance() const {
	return balance;
}

void BankAccount::deposit(double amount) {
	if (amount > 0) {
		balance += amount;
		cout << "Deposited: " << amount << "\n";
	}
	else {
		cout << "Invalid deposit amount.\n";
	}
}

void BankAccount::withdraw(double amount) {
	if (amount > 0 && amount <= balance)
	{
		balance -= amount;
		cout << "Withdrawn: " << amount << "\n";
	}
	else
	{
		cout << "Invalid withdraw amount or insufficient funds.\n";
	}
}

void BankAccount::displayAccountInfo() const
{
	cout << "Account Holder: " << accountHolder << "\n"
		<< "Current Balance: " << balance << "\n";
}

int main() {
	BankAccount account("Alice", 5000.0);

	account.displayAccountInfo();

	account.deposit(1000.0);
	account.withdraw(2000.0);
	account.withdraw(5000.0); // 残高不足で失敗

	account.displayAccountInfo();

	return 0;
}