#include <iostream>
using namespace std;

void compute_coin(int coin_value, int& number, int& amount_left);
//Precondition: 0 < coin_value < 100; 0 <= amount_left < 100.
//Postcondition: number has been set equal to the maximum number of coins of
//denomination coin_value cents that can be obtained from amount_left cents.
//amount_left has been decreased by the value of the coins, i.e.,
//decreased by number*coin_value.
{
	number = amount_left / coin_value;
	amount_left = amount_left%coin_value
}
int main()
{
	// Disply Program Information
	cout << "AddHelloGoodbye Application\n";
	cout << "By: <yourname>\n";
	cout << "---------------\n\n";


	// Variable declaration
	char letter;
	int coin_value, quarters, number, amount_left;

	// Begin your application here!
	do
	{
		cout << "Enter the amount of change: ";
		cin >> amount_left;
		number = 0;
		coin_value = 25;
		compute_coin(coin_value, number, amount_left);
		quarters = number;
		cout << quarters;
		cout << "Would you like to run the program again (Y or N)?";
		cin >> letter
	} while (letter == 'Y' || letter == 'y');

		return 0;
}