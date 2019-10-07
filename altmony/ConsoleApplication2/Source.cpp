#include<iostream> 
#include<cstdlib> 
using namespace std;

class AltMoney
{
public:
	AltMoney();
	AltMoney(int d, int c);
	friend void subtract(AltMoney m1, AltMoney m2, AltMoney& dif);
	friend void Add(AltMoney m1, AltMoney m2, AltMoney& sum);
	void display_money();
	friend void read_money(int& d, int& c);
private:
	int dollars;
	int cents;
};



int main()
{
	char letter;
	int d, c;
	AltMoney m1, m2, sum, dif;

	sum = AltMoney(0, 0);

	read_money(d, c);
	m1 = AltMoney(d, c);
	cout << "The first money is:";
	m1.display_money();

	read_money(d, c);
	m2 = AltMoney(d, c);
	cout << "The second money is:";
	m2.display_money();

	Add(m1, m2, sum);
	cout << "The sum is:";
	sum.display_money();

	cout << "Press any key to end:";
	cin >> letter;
	return 0;
}

AltMoney::AltMoney()
{
}

AltMoney::AltMoney(int d, int c)
{
	dollars = d;
	cents = c;
}

void AltMoney::display_money()
{
	cout << "$" << dollars << ".";
	if (cents <= 9)
		cout << "0";  //to display a 0 in the left for numbers less than 10 
	cout << cents << endl;
}
void subtract(AltMoney m1, AltMoney m2, AltMoney& dif)
{
	int extra = 0;
	dif.cents = m1.cents + m2.cents;
	if (dif.cents >= 100) {
		dif.cents = dif.cents - 100;
		extra = 1;
	}
	dif.dollars = m1.dollars + m2.dollars + extra;

}
void Add(AltMoney m1, AltMoney m2, AltMoney& sum)
{
	int extra = 0;
	sum.cents = m1.cents + m2.cents;
	if (sum.cents >= 100) {
		sum.cents = sum.cents - 100;
		extra = 1;
	}
	sum.dollars = m1.dollars + m2.dollars + extra;

}


void read_money(int& d, int& c)
{
	cout << "Enter dollar \n";
	cin >> d;
	cout << "Enter cents \n";
	cin >> c;
	if (d < 0 || c < 0)
	{
		cout << "Invalid dollars and cents, negative values\n";
		exit(1);
	}
}