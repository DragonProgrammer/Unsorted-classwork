#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;
int num_players;
string players[20][4];
ofstream record;
void new_line() {
	char next;
	do {
		cin.get(next);
	} while (next != '\n');
}
void getplayers(string players[20][4], int &num_players)
{
	char next, letter;
	ofstream cin_out;
	ifstream cin_in;
	cout << "\nIf this is a team game please enter teammates next to each other.\n";
	cout << "When entering initials there should be no spaces or other characters.\n";
	for (int i = 0; i < num_players; i++)
	{
		cout << "\nPlayer " << i + 1 << " enter your initails and press enter.\n";
		cin_out.open("players.doc");
		if (cin_out.fail())
		{
			cout << "There was an error while trying to open players.txt!\n";
			cout << "Enter any character and hit return to end the program.\n";
			cin >> letter;
			exit(1);
		}
		do {
			cin.get(next);
			cin_out.put(toupper(next));
		} while (next != '\n');
		cin_out.close();
		cin_in.open("players.doc");
		if (cin_in.fail())
		{
			cout << "There was an error while trying to open players.txt!\n";
			cout << "Enter any character and hit return to end the program.\n";
			cin >> letter;
			exit(1);
		}
		getline(cin_in, players[i][0], '\n');
		cin_in.close();
	}
}
int main()
{
	using namespace std;
	char letter, playercheck, lifecheck;
	ofstream record;
	int life[20], chan[20];
	int chan_1, newlife, chang, lifechan, lifestart, num_players = 2, gamecount = 0;
	cout << "This program will keep track of life totals in a game of Magic.\n";
	cout << "Whenever a life total changes, enter the changes to each player's, or team's, life starting with player one.\n";
	cout << "No change in life is entered as 0, and life loss is entered with a -.\n";
	cout << "Even if a player loses continue entering 0 for life change.\n\n";
	record.open("game.doc");
	if (record.fail())
	{
		cout << "There was an error while trying to open players.txt!\n";
		cout << "Enter any character and hit return to end the program.\n";
		cin >> letter;
		exit(1);
	}
	do
	{
		do
		{
			if (gamecount == 0)
			{
				cout << "How many players?(up to 20)\n";
				cin >> num_players;
				new_line();
				getplayers(players, num_players);
			}
			else
			{
				cout << "Same players (Y or N)?\n";
				cin >> playercheck;
				if (toupper(playercheck) == 'N')
				{
					cout << "How many players?(up to 20)\n";
					cin >> num_players;
					new_line();
					getplayers(players, num_players);
				}
			}
			if (gamecount == 0)
			{
				cout << "What is the starting life?\n";
				cin >> lifestart;
			}
			else
			{
				cout << "Same starting life? (Y or N)?\n";
				cin >> lifecheck;
				if (toupper(lifecheck) == 'N')
				{
					lifestart = 0;
					cout << "What is the starting life?\n";
					cin >> lifestart;
				}
			}
			int winner, replay = 0;
			cout << "\nStart Game\n";
			cout << players[0][0] << " vs. " << players[1][0];

			// specail case ONE PLAYER
			// Should not even contemplate loop, jump right to win
			//GFR vs.

			//	GFR |
			//	_____ | ______
			//	1 | -858993460
			//	0
			//	1 | L
			//	Winner is GFR.

			// What does "-858993460" mean?

				for (int p = 2; p < num_players; p++)
				{
					cout << " vs. " << players[p][0];
				}
				cout << "\n\n";
				cout << setw(4) << left << players[0][0];
				cout << " | ";
				cout << setw(4) << left << players[1][0];
				for (int p = 2; p < num_players; p++)
				{
					cout << " | ";
					cout << setw(4) << left << players[p][0];
				}
				cout << "\n_____|______";
				for (int p = 2; p < num_players; p++)
				{
					cout << "|______";
				}
				cout << "\n";
				for (int i = 0; i < num_players; i++)
				{
					life[i] = lifestart;
				}
				record << "\nStart Game\n";
				record << players[0][0] << " vs. " << players[1][0];
				for (int p = 2; p < num_players; p++)
				{
					record << " vs. " << players[p][0];
				}
				record << "\n\n";
				record << setw(4) << left << players[0][0];
				record << " | ";
				record << setw(4) << left << players[1][0];
				for (int p = 2; p < num_players; p++)
				{
					record << " | ";
					record << setw(4) << left << players[p][0];
				}
				record << "\n_____|______";
				for (int p = 2; p < num_players; p++)
				{
					record << "|______";
				}
				record << "\n";
				cout.width(4);
				cout << left << life[0];
				cout << " | ";
				cout.width(4);
				cout << right << life[1];
				for (int p = 2; p < num_players; p++)
				{
					cout << " | ";
					cout.width(4);
					cout << left << life[p];
				}
				cout << "\n";
				record << setw(4) << left << life[0];
				record << " | ";
				record << setw(4) << left << life[1];
				for (int p = 2; p < num_players; p++)
				{
					record << " | ";
					record << setw(4) << left << life[2];
				}
				record <<"\n";
				do
				{
					replay = 0;
					for (int c = 0; c < num_players; c++)
					{
						cin >> chan_1;
						chan[c] = chan_1;
					}
					for (int l = 0; l < num_players; l++)
					{
						newlife = life[l];
						chang = chan[l];
						life[l] = newlife + chang;
}
					cout.width(4);
					if (life[0] < 1)
					{
						cout << left << "L";
						record << setw(4) << left << "L";
					}
					else
					{
						cout << left << life[0];
						record << setw(4) << left << life[0];
					}
					cout << " | ";
					record << " | ";
					cout.width(4);
					if (life[1] < 1)
					{
						cout << left << "L";
						record << setw(4) << left << "L";
					}
					else
					{
						cout << right << life[1];
						record << setw(4) << left << life[1];
					}
					for (int p = 2; p < num_players; p++)
					{
						cout << " | ";
						record << " | ";
						cout.width(4);
						if (life[p] < 1)
						{
							cout << left << "L";
							record << setw(4) << left << "L";
						}
						else
						{
							cout << left << life[p];
							record << setw(4) << left << life[p];
						}
					}
					cout << "\n";
					record << "\n";
					for (int w = 0; w < num_players; w++)
					{
						if (life[w] > 0)
						{
							replay++;
							winner = w;
						}
					}
				} while (replay != 1);
				cout << "Winner is " << players[winner][0] << ".\n";
				record << "Winner is " << players[winner][0] << ".\n";
					gamecount = 0;

					// specail case ALL LOSE

		} while (gamecount > 0);
		new_line();
		cout << "\nAnother game (Y or N)?\n";
		gamecount++;
		cin >> letter;
	} while (toupper(letter) == 'Y');
	record.close();
	return 0;
}