#include <iostream>
using namespace std;

void compute_coin(int coin_value, int &number, int &amount_left)
//Precondition: 0 < coin_value < 100; 0 <= amount_left < 100.
//Postcondition: number has been set equal to the maximum number of coins of
//denomination coin_value cents that can be obtained from amount_left cents.
//amount_left has been decreased by the value of the coins, i.e.,
//decreased by number*coin_value.
{
	number = amount_left / coin_value;
	amount_left = amount_left%coin_value;
}

void print_coins(int quarters, int dimes, int nickels, int pennies)
// Precondition: quarters, dimes, nickels, and pennies
// contain the correct number of coins.
// Postcondition: A sentence specifying the proper change is sent
// to the console.
{
	cout << "can be given as";
	if (quarters > 0)
	{
		cout << " " << quarters << " quarters";
	}
	if (dimes > 0)
	{
		cout << " " << dimes << " dimes ";
	}
	if (nickels > 0)
	{
		cout << " " << nickels << " nickels";
	}
	if (pennies > 0)
	{
		cout << " " << pennies << " pennies";
	}
	cout << ".\n";
}

int main2()
{
	// Disply Program Information
	cout << "AddHelloGoodbye Application\n";
	cout << "By: <yourname>\n";
	cout << "---------------\n\n";

	// Variable declaration
	char letter;
	int coin_value, quarters, dimes, nickels, pennies, number, amount_left;

	// Begin your application here!
	
	cout << "Enter the amount of change: ";
	cin >> amount_left;
	number = 0;
	coin_value = 0;
	compute_coin(coin_value, number, amount_left);
	quarters = number;
	cout << quarters;
	cout << "\n";

	// Wait for the user to enter a character.
	cout << "\nEnter any character and hit return to end the program.\n";
	cin >> letter;

	return 0;
};