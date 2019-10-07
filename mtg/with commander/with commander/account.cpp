#include <iostream>
using namespace std;
class SavingsAccount
{
private:
	int dol;
	int cen;
public:
	SavingsAccount(int dol, int cen)
	{
		dol = 0;
		cen = 0;
	}
	SavingsAccount::SavingsAccount();
	void inicial(int dol, int cent);
	void input(int dol, int cen);
	void withdraw(int dol, int cen);
	void balance(int dol, int cen);
};

// main

int main()
{
	char letter;
	SavingsAccount bank1, bank2;
	bank1.input(0, 0);

	cout << "Press any key to end:";
	cin >> letter;
	return 0;

}

// functions

void SavingsAccount::inicial(int dol, int cen)
{
	int normalizer;
	cout << "How many dollars are in the starting deposit?\n";
	cin >> dol;
	cout << "How many cents are in the starting deposit?\n\n";
	cin >> cen;
	{
		normalizer = cen / 100;
		cen = cen % 100;
		dol = dol + normalizer;
	}
}
void SavingsAccount::input(int dol, int cen)
{
	int doladd, cenadd, normalizer;
	cout << "How many dollars do you want to deposit?\n";
	cin >> doladd;
	dol = dol + doladd;
	cout << "How many cents do you want to deposit?\n";
	cin >> cenadd;
	cen = cen = cenadd;
	if (cen > 99)
	{
		normalizer = cen / 100;
		cen = cen % 100;
		dol = dol + normalizer;
	}
}
void SavingsAccount::withdraw(int dol, int cen)
{
	int normalizer, dollars, cents;
	cout << "How many dollars do you want to withdraw?\n";
	cin >> dollars;
	dol = dol - dollars;
	cout << "How many cents do you want to withdraw?\n";
	cin >> cents;
	cen = cen - cents;
	if (cen < 0)
	{
		normalizer = cen / 100;
		normalizer = abs(normalizer);
		cen = cen % 100;
		cen = abs(cen);
		dol = dol - normalizer;
	}
	if (cen > 99)
	{
		normalizer = cen / 100;
		cen = cen % 100;
		dol = dol + normalizer;
	}
	if (dol < 0)
	{
		cout << "Not enough in account, please withdraw less.\n";
		void withdraw();
	}
}
void SavingsAccount::balance(int dol, int cen)
{
	cout << "THe acount balance is $" << dol << "." << cen << ".\n";
}

