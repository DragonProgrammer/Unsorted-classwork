#include <iostream>
using namespace std;
// card function
int card_value(char card)
{
	switch (card)
	{
	case '1':
	case 'a':
	case 'A':
		return 11;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case 'j':
	case 'J':
	case 'Q':
	case 'q':
	case 'k':
	case 'K':
	case 't':
	case 'T':
		return 10;
	}
	return 0;
}
int main()
{
	// Disply Program Information
	cout << "Cardvalue\n";
	cout << "By: Mike Peterson\n";
	cout << "---------------\n\n";

	// Variable declaration
	char card, card1, card2, card3, card4, card5, letter;
	int value1, value2, value3, value4, hand, total, Aceflag;

	// Begin your application here!
	// program loop
	//do
	//{
		cout << "Enter the number of cards: ";
		//cin >> hand;
		cout << "helloe";
		cout << "Enter cards: ";
		cin >> card1 >> card2;
		card = card1;
		value1 = card_value(card);
		card = card2;
		total = value1 + card_value(card);
		cout << "The value of your hand is " << total << ".\n";
		cout << "Would you like to score another hand (Y or N)?: ";
		cin >> letter;
	//} while (letter == 'Y' || letter == 'y');
	return 0;
}