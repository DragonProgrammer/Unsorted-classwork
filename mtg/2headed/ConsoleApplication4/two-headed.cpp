#include <iostream>
#include <string>
using namespace std;
int main()
{
	char play_1, play_2, play_3, play_4, letter;
	int life_1, life_2, chan_1, chan_2;
	cout << "This program will keep track of two players life totals in a game of magic.\n";
	cout << "The program assumes that each player starts with 30 life.\n";
	cout << "Whenever a life total changes, enter the changes to each players life starting with player one.\n";
	cout << "No change in life is entered as 0, and life loss is entered with a -.\n";
	cout << "Players on team one enter your initails with a space between sets. There should be no spaces or other characters:\n";
	cin >> play_1;
	cin >> play_2;
	cout << "Players on team two enter your initails with a space between sets. There should be no spaces or other characters:\n";
	cin >> play_3;
	cin >> play_4;
	cout << "Start Game\n";
	cout << play_1;
	cout << "/";
	cout << play_2;
	cout << " vs.";
	cout << play_3;
	cout << "/";
	cout << play_4;
	cout << "\n\n";
	cout.width(4);
	cout << left << "pl1";
	cout << " | ";
	cout.width(4);
	cout << right << "Pl2";
	cout << "\n";
	cout << "______|_______";
	cout << "\n";
	life_1 = 30;
	life_2 = 30;
	cout.width(4);
	cout << left << life_1;
	cout << " | ";
	cout.width(4);
	cout << right << life_2;
	cout << "\n";
	do
	{
		cin >> chan_1;
		cin >> chan_2;
		life_1 = life_1 + chan_1;
		life_2 = life_2 + chan_2;
		cout.width(4);
		cout << left << life_1;
		cout << " | ";
		cout.width(4);
		cout << right << life_2;
		cout << "\n";
	} while (life_1 > 0 && life_2 > 0);
	cout << "Game Over\n";
	if (life_1 > life_2)
		cout << "Pl1 Wins\n";
	else
		cout << "Pl2 Wins\n";
	cout << "\nEnter any character and hit return to end the program.\n";
	cin >> letter;
	return 2;
}