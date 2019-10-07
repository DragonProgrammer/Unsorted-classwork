#include <iostream>
using namespace std;
// globals
int Aceflag;
// function declaration
void print_value(int total, int Aceflag);
int aceflag(char card1, char card2, char card3 = 0, char card4 = 0, char card5 = 0);
int card_value(char card);

int main()
{
	// Disply Program Information
	cout << "BlackJack Scoring\n";
	cout << "By: Mike Peterson\n";
	cout << "---------------\n";

	// Variable declaration
	char card, card1, card2, card3, card4, card5, letter;
	int value1, value2, value3, value4, hand, total;

	// Begin your application here!
	// program loop
	do
	{
		cout << "\nEnter the number of cards: ";
		cin >> hand;
		// debug cout << hand;
		if (hand == 2)
		{
			cout << "Enter cards: ";
			cin >> card1 >> card2;
			aceflag(card1, card2);
			card = card1;
			value1 = card_value(card);
			card = card2;
			total = value1 + card_value(card);
			print_value(total, Aceflag);
		}
		else if (hand == 3)
		{
			cout << "Enter cards: ";
			cin >> card1 >> card2 >> card3;
			aceflag(card1, card2, card3);
			//debug cout << Aceflag;
			card = card1;
			value1 = card_value(card);
			card = card2;
			value2 = card_value(card);
			card = card3;
			total = value1 + value2 + card_value(card);
			print_value(total, Aceflag);
		}
		else if (hand == 4)
		{
			cout << "Enter cards: ";
			cin >> card1 >> card2 >> card3 >> card4;
			aceflag(card1, card2, card3, card4);
			//debug cout << Aceflag;
			card = card1;
			value1 = card_value(card);
			card = card2;
			value2 = card_value(card);
			card = card3;
			value3 = card_value(card);
			card = card4;
			total = value1 + value2 + value3 + card_value(card);
			print_value (total, Aceflag);
		}
		else
		{
			cout << "Enter cards: ";
			cin >> card1 >> card2 >> card3 >> card4 >> card5;
			aceflag(card1, card2, card3, card4, card5);
			//debug cout << Aceflag;
			card = card1;
			value1 = card_value(card);
			card = card2;
			value2 = card_value(card);
			card = card3;
			value3 = card_value(card);
			card = card4;
			value4 = card_value(card);
			card = card5;
			total = value1 + value2 + value3 + value4 + card_value(card);
			print_value(total, Aceflag);
		}
		cout << "Would you like to score another hand (Y or N)?: ";
		cin >> letter;
	} while (letter == 'Y' || letter == 'y');
	return 0;
}
// print function
void print_value(int total, int Aceflag)
{
	if (total > 21)
	{
		if (Aceflag > 0)
		{
			do
			{
				total = total - 10;
				Aceflag--;
			} while (total > 21 && Aceflag > 0);
			if (total > 21)
			{
				cout << "You are BUSTED!\n";
			}
			else
			{
				cout << "The value of your hand is " << total << ".\n";
			}
		}
		else
		{
			cout << "You are BUSTED!\n";
		}
	}
	else
	{
		cout << "The value of your hand is " << total << ".\n";
	}

}
// Ace checker function
int aceflag(char card1, char card2, char card3, char card4, char card5)
{
	Aceflag = 0;
	if (card1 == 'a' || card1 == 'A')
	{
		Aceflag++;
		//debug cout << Aceflag << "\n";
	};
	if (card2 == 'a' || card2 == 'A')
	{
		Aceflag++;
		//debug cout << Aceflag << "\n";
	};
	if (card3 == 'a' || card3 == 'A')
	{
		Aceflag++;
		//debug cout << Aceflag << "\n";
	};
	if (card4 == 'a' || card4 == 'A')
	{
		Aceflag++;
		//debug cout << Aceflag << "\n";
	};
	if (card5 == 'a' || card5 == 'A')
	{
		Aceflag++;
		//debug cout << Aceflag << "\n";
	};
	return Aceflag;
}
// card value function
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
