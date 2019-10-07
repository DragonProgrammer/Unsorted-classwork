#include <iostream>
using namespace std;

void compute_coin(int& coin_value, int& number, int& amount_left)
//Precondition: 0 < coin_value < 100; 0 <= amount_left < 100.
//Postcondition: number has been set equal to the maximum number of coins of
//denomination coin_value cents that can be obtained from amount_left cents.
//amount_left has been decreased by the value of the coins, i.e.,
//decreased by number*coin_value.
{
	//debug cout << "I got here\n" << number << " " << amount_left <<" "<< coin_value << " \n";
	number = amount_left / coin_value;
	//debug cout << "Number is now " << number << "\n";
	amount_left = amount_left%coin_value;
}

void print_coins(int quarters, int dimes, int nickels, int pennies)
// Precondition: quarters, dimes, nickels, and pennies
// contain the correct number of coins.
// Postcondition: A sentence specifying the proper change is sent
// to the console.
{
	int commaflag;
	commaflag = 0;
	cout << "can be given as";
	if (quarters > 0)
	{
		cout << " " << quarters << " quarter";
		if (quarters > 1)
		{
			cout << "s";
		}
		commaflag++;
	}
	if (dimes > 0)
	{
		if (commaflag>0)
		{
			cout << ",";
		}
		cout << " " << dimes << " dime";
		if (dimes > 1)
		{
			cout << "s";
		}
		commaflag++;
	}
	if (nickels > 0)
	{
		if (commaflag>0)
		{
			cout << ",";
		}
		cout << " " << nickels << " nickel";
		if (nickels > 1)
		{
			cout << "s";
		}
		commaflag++;
	}
	if (pennies > 0)
	{
		if (commaflag>0)
		{
			cout << ",";
		}
		cout << " " << pennies << " penn";
		if (pennies > 1)
		{
			cout << "ies";
		}
		else
		{
			cout << "y";
		}
	}
	cout << ".\n";
}

int main()
{
	// Disply Program Information
	cout << "Get Change Application\n";
	cout << "By: Michael Peterson\n";
	cout << "---------------\n";


	// Variable declaration
	char letter;
	int coin_value, quarters, dimes, nickels, pennies, number, amount_left;

	// Begin your application here!
	do
	{
		cout << "\nEnter the amount of change: ";
		cin >> amount_left;
		if (amount_left < 1)
		{
			cout << "You can not get change for 0 cents.\n";
			cout << "Would you like to run the program again (Y or N)?";
			cin >> letter;
			continue;
		}
		if (amount_left > 99)
		{
			cout << "Enter a number less then 100 cents.\n";
			cout << "Would you like to run the program again (Y or N)?";
			cin >> letter;
			continue;
		}
		cout << amount_left << " cents ";
		number = 0;
		coin_value = 25;
		compute_coin(coin_value, number, amount_left);
		quarters = number;
		//debug cout << quarters << "\n";
		coin_value = 10;
		compute_coin(coin_value, number, amount_left);
		dimes = number;
		//debug cout << dimes;
		coin_value = 5;
		compute_coin(coin_value, number, amount_left);
		nickels = number;
		pennies = amount_left;
		print_coins(quarters, dimes, nickels, pennies);
		cout << "Would you like to run the program again (Y or N)?";
		cin >> letter;
		// Wait for the user to enter a character.
	} while (letter == 'Y' || letter == 'y');
	
	return 0;
}
