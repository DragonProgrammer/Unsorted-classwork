#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int num_players;
string players[20][4]; // look up vectors
void new_line()
{
	char next;
	do {
		cin.get(next);
	} while (next != '\n');
}
void getplayers(string players[20][4], int &num_players)
{
	cout << "If this is a team game please enter teammates next to each other.\n";
	for (int i = 0; i < num_players; i++)
	{
		cout << "Player " << i + 1 << " enter your initails and press enter. There should be no spaces or other characters:\n";
		getline(cin, players[i][0]);
	}
	for (int i = 0; i < num_players; i++)
	{
		cout << players[i][0] << "\n";
	}
}
void playerscom()
{
	cout << "Start Game\n";
	cout << players[0][0];
	cout << " vs. ";
	cout << players[1][0];
	cout << " vs.";
	cout << players[2][0];
	cout << " vs. ";
	cout << players[3][0];
	cout << "\n\n";
	cout.width(4);
	cout << left << players[0][0];
	cout << " | ";
	cout.width(4);
	cout << left << players[1][0];
	cout << " | ";
	cout.width(4);
	cout << left << players[2][0];
	cout << " | ";
	cout.width(4);
	cout << left << players[4][0];
	cout << "\n";
	cout << "_____|_____|_____|_____";
	cout << "\n";
}
void players2hg()
{
	cout << "Start Game\n";
	cout << players[0][0];
	cout << "/";
	cout << players[1][0];
	cout << " vs.";
	cout << players[2][0];
	cout << "/";
	cout << players[3][0];
	cout << "\n\n";
	cout.width(7);
	cout << left << "Team 1";
	cout << " | ";
	cout.width(7);
	cout << right << "Team 2";
	cout << "\n";
	cout << "________|________";
	cout << "\n";
}

void players1v1()
{
	cout << "Start Game\n";
	cout << players[0][0];
	cout << " vs.";
	cout << players[1][0];
	cout << "\n\n";
	cout.width(4);
	cout << left << players[0][0];
	cout << " | ";
	cout.width(4);
	cout << right << players[1][0];
	cout << "\n";
	cout << "_____|_____";
	cout << "\n";
	
}
int main()
{
	using namespace std;
	char letter, style, playercheck;
	int life_1, life_2, life_3, life_4, chan_1, chan_2, chan_3, chan_4, num_players=2, gamecount=0;
	cout << "This program will keep track of life totals in a game of Magic.\n";
	cout << "It can also keep track of deck size and poison counters if you tern those features on.\n\n";
	cout << "The program can do 1v1, 2 headed giant, and multiplayer, with draft, commander and 60 card decks.\n";
	cout << "Whenever a life total changes, enter the changes to each player's, or team's, life starting with player one.\n";
	cout << "No change in life is entered as 0, and life loss is entered with a -.\n";
	do
	{
		if (gamecount == 0)
		{
			cout << "How many players?(up to 4)";
			cin >> num_players;
			new_line();
			getplayers(players, num_players);
		} else
		{cout << "Same players (Y or N)?\n";
			cin >> playercheck;
			if (toupper(playercheck)=='N')
			{
				cout << "How many players?(up to 4)";
				cin >> num_players;
				new_line();
				getplayers(players, num_players);
			}
		}
			cout << "What play style is this (enter the corisponding number)?\n";
			cout << "1) 1v1   2) 2 headed giant 3) Commander";
			cin >> style;
		
		

	if (style == '1')
	{
		players1v1();
		life_1 = 20;
		life_2 = 20;
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
			cout << players[0][0] <<" Wins\n";
		else
			cout << players[1][0] << " Wins\n";
	}
	if (style == '2')
	{
		{
			players2hg();
			life_1 = 30;
			life_2 = 30;
			cout.width(7);
			cout << left << life_1;
			cout << " | ";
			cout.width(7);
			cout << right << life_2;
			cout << "\n";
			do
			{
				cin >> chan_1;
				cin >> chan_2;
				life_1 = life_1 + chan_1;
				life_2 = life_2 + chan_2;
				cout.width(7);
				cout << left << life_1;
				cout << " | ";
				cout.width(7);
				cout << right << life_2;
				cout << "\n";
			} while (life_1 > 0 && life_2 > 0);
			cout << "Game Over\n";
			if (life_1 > life_2)
				cout << "Team 1 Wins\n";
			else
				cout << "Team 2 Wins\n";
			}
		}
	if (style = '3')
	{
		cout << "Even if a player loses continue entering 0 for life change"
		playerscom();
		life_1 = 40;
		life_2 = 40;
		life_3 = 40;
		life_4 = 40;
		cout.width(4);
		cout << left << life_1;
		cout << " | ";
		cout.width(4);
		cout << right << life_2;
		cout << " | "
		cout.width(4);
		cout << left << life_3;
		cout << " | ";
		cout.width(4);
		cout << right << life_4;
		cout << "\n";
		do
		{
			cin >> chan_1;
			cin >> chan_2;
			cin >> chan_3;
			cin >> chan_4;
			life_1 = life_1 + chan_1;
			life_2 = life_2 + chan_2;
			life_3 = life_3 + chan_3;
			life_4 = life_4 + chan_4;
			cout.width(4);
			if (life_1 < 1)
			{
				cout << left << "L"
			}
			else
			{
				cout << left << life_1;
			}
			cout << " | ";
			cout.width(4);
			if (life_2 < 1)
			{
				cout << left << "L"
			}
			else
			{
				cout << right << life_2;
			}
			cout << " | "
			cout.width(4);
			if (life_3 < 1)
			{
				cout << left << "L"
			}
			else
			{
				cout << left << life_3;
			}
			cout << " | ";
			cout.width(4);
			if (life_4 < 1)
			{
				cout << left << "L"
			}
			else
			{
				cout << right << life_4;
			}
			cout << "\n";
		} while (life_1 > 0 && life_2 > 0 && life_3 > 0 && life_4 > 0);
		};
	}
		cout << "Another game (Y or N)?";
		gamecount++;
		cin >> letter;
	} while (toupper(letter) == 'Y');
	return 0;
}