#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;
int num_players;
string players[20][4];
ofstream record;
// currently only working with dimesion [i][0]
//other dimesions for later implementation, will try atof as way to do math on array elements
void new_line() {
	char next;
	do {
		cin.get(next);
	} while (next != '\n');
}
void players1v1()
{
	cout << "Start Game\n";
	cout << players[0][0];
	cout << " vs. ";
	cout << players[1][0];
	cout << "\n\n";
	cout.width(4);
	cout << left << players[0][0];
	cout << " | ";
	cout.width(4);
	cout << right << players[1][0];
	cout << "\n_____|_____\n";
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

	//for (int i = 0; i < num_players; i++)
	//{
	//cout << players[i][0] << "\n";
	//}
}
void playerscom()
{
	//future changes will have this doing for (i=0, i>num_players,i++) so that it can work 2 or more players.
	// adding another "vs. " and players[i][0] plus the apropriet table section.
	//same loop would then be used for life output once life is set to players[i][1].
	cout << "Start Game\n";
	
	cout << players[0][0] << " vs. " << players[1][0];
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
	}
void players2hg()
{
	//future implementation shal have it so that it will run with 2+ teams
	//also implement way of setting team size so that Emporor format or i-headed giant can be run
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
	cout << right << "Team 2\n";
	cout << "________|________\n";


	// were record table creation should go
}

void players1v1();
int main()
{
	using namespace std;
	char letter, style, playercheck;
	ofstream record;
	int life[20], chan[20];
	int chan_1, newlife, chang, lifechan, lifestart, num_players = 2, gamecount = 0;
	//life_1 shall later become players[0][1] and life_2 becoming players[1][1], ext.
	//chan_1 shall be part of a loop or funtion that gets the change for first life aplays it to the life
	// and then getts the next change. Effectively becoming chan_[i].
	//once implemented commander no longer to be specified players.
	cout << "This program will keep track of life totals in a game of Magic.\n";
	//cout << "It can also keep track of deck size and poison counters if you tern those features on.\n\n";
	//cout << "The program can do 1v1, 2 headed giant, and multiplayer, with draft, commander and 60 card decks.\n"; 
	// deck size to be players[i][2] and poison to be players[i][3]
	cout << "The program can do 1v1, 2 headed giant, and 4 player commander.\n";
	cout << "Whenever a life total changes, enter the changes to each player's, or team's, life starting with player one.\n";
	cout << "No change in life is entered as 0, and life loss is entered with a -.\n\n";
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
			cout << "How many players?(up to 4)\n";
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
				cout << "How many players?(up to 4)\n";
				cin >> num_players;
				new_line();
				getplayers(players, num_players);
			}
		}
		cout << "What play style is this (enter the corisponding number)?\n";
		cout << "1) 1v1   2) 2 headed giant 3) Commander\n";
		cin >> style;

		if (style == '1')
		{
			//could latter be chnged to multiplayer for loops
			players1v1();
			lifestart = 20;
			for (int i = 0; i < num_players; i++)
			{
				life[i] = lifestart;
			}
			// was inside function but did not output to file, for lood did
			record << "\nStart Game\n";
			record << players[0][0] << " vs. " << players[1][0] << "\n\n";
			record << setw(4) << left << players[0][0];
			record << " | ";
			record << setw(4) << left << players[1][0];
			record << "\n_____|_____\n";
			cout.width(4);
			cout << left << life[0];
			cout << " | ";
			cout.width(4);
			cout << right << life[1];
			cout << "\n";

			record << setw(4) << left << life[0];
			record << " | ";
			record << setw(4) << right << life[1];
			record << "\n";
			do
			{
				for (int c = 0; c < num_players; c++)
				{
					cin >> chan_1;
					chan[c] = chan_1;
					//cout << "change " << c << "is" << chan[c] << "\n";
				}
				for (int l = 0; l < num_players; l++)
				{
					//cout << "life " << l << "start is" << life[l] << "\n";
					newlife = life[l];
					chang = chan[l];
					life[l] = newlife + chang;
					//cout << "life " << l << "end is" << life[l] << "\n";
				}
				cout.width(4);
				cout << left << life[0];
				cout << " | ";
				cout.width(4);
				cout << right << life[1];
				cout << "\n";

				record << setw(4) << left << life[0];
				record << " | ";
				record << setw(4) << right << life[1];
				record << "\n";
			} while (life[0] > 0 && life[1] > 0);
			cout << "\nGame Over\n";
			record << "\nGame Over\n";
			if (life[0] > life[1])
			{
				cout << players[0][0] << " Wins\n";
				record << players[0][0] << " Wins\n";
			}
			else
			{
				cout << players[1][0] << " Wins\n";
				record << players[1][0] << " Wins\n";
			}
		}
		if (style == '2')
		{
			int num_teams = 2;
			players2hg();
			lifestart = 30;

			for (int i = 0; i < num_teams; i++)
			{
				life[i] = lifestart;
			}
			record << "\nStart Game\n";
			record << players[0][0];
			record << "/";
			record << players[1][0];
			record << " vs. ";
			record << players[2][0];
			record << "/";
			record << players[3][0];
			record << "\n\n";
			record << setw(7) << left << "Team 1";
			record << " | ";
			record << setw(7) << right << "Team 2\n";
			record << "________|________\n";
			record << "\n";

			cout.width(7);
			cout << left << life[0];
			cout << " | ";
			cout.width(7);
			cout << right << life[1];
			cout << "\n";

			record << setw(7) << left << life[0];
			record << " | ";
			record << setw(7) << right << life[1] << "\n";
			do
			{
				for (int c = 0; c < num_players; c++)
				{
					cin >> chan_1;
					chan[c] = chan_1;
					//cout << "change " << c << "is" << chan[c] << "\n";
				}
				for (int l = 0; l < num_players; l++)
				{
					//cout << "life " << l << "start is" << life[l] << "\n";
					newlife = life[l];
					chang = chan[l];
					life[l] = newlife + chang;
					//cout << "life " << l << "end is" << life[l] << "\n";
				}
				cout.width(7);
				cout << left << life[0];
				cout << " | ";
				cout.width(7);
				cout << right << life[1];
				cout << "\n";

				record << setw(7) << left << life[0];
				record << " | ";
				record << setw(7) << right << life[1];
				record << "\n";
			} while (life[0] > 0 && life[1] > 0);
			cout << "\nGame Over\n";
			record << "\nGame Over\n";
			if (life[0] > life[0])
			{
				cout << "Team 1 Wins\n";
				record << "Team 1 Wins\n";
			}
			else
			{
				cout << "Team 2 Wins\n";
				record << "Team 2 Wins\n";
			}
		}
		if (style == '3')
		{
			int winner, replay = 0;
			cout << "Even if a player loses continue entering 0 for life change.\n";
			//see if possible to skip a player so that number of inputs can go down
			playerscom();
			lifestart = 40;
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

			// life setting shall become a for loop
			cout.width(4);
			cout << left << life[0];
			cout << " | ";
			cout.width(4);
			cout << right << life[1];
			cout << " | ";
			cout.width(4);
			cout << left << life[2];
			cout << " | ";
			cout.width(4);
			cout << right << life[3];
			cout << "\n";

			record << setw(4) << left << life[0];
			record << " | ";
			record << setw(4) << left << life[1];
			record << " | ";
			record << setw(4) << left << life[2];
			record << " | ";
			record << setw(4) << left << life[3] << "\n";

			gamecount = 0;
		}
	} while (gamecount > 0);
			new_line();
			cout << "\nAnother game (Y or N)?\n";
			gamecount++;
			cin >> letter;

		} while (toupper(letter) == 'Y');
		
	record.close();
	return 0;
}
