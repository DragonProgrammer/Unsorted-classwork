#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// Disply Program Information
	cout << "Directory Search\n";
	cout << "By: Mike Peterson\n";
	cout << "------------------\n\n";

	// Variable declaration
	char letter;
	ifstream in_file_names, in_file_nums;
	string names[2000], nums[2000], name;
	int name_index = 0, num_index = 0;
	void new_line();
	// Begin your application here!
	in_file_names.open("phoneNames.txt");
	if (in_file_names.fail())
	{
		cout << "There was an error while trying to open phoneNames.txt!\n";
		cout << "Enter any character and hit return to end the program.\n";
		cin >> letter;
		exit(1);
	}
	in_file_nums.open("phoneNums.txt");
	if (in_file_nums.fail())
	{
		cout << "There was an error while trying to open phoneNums.txt!\n";
		cout << "Enter any character and hit return to end the program.\n";
		cin >> letter;
		exit(1);
	}

	while (!in_file_names.eof() && name_index<2000)
	{
		getline(in_file_names, names[name_index]);
		name_index++;
	}
	while (!in_file_nums.eof() && num_index<2000)
	{
		getline(in_file_nums, nums[num_index]);
		num_index++;
	}

	in_file_names.close();
	in_file_nums.close();
	
	cout << "Welcome to the automated phone directory!\n";
	do
	{
		cout << "\nEnter the name of the person you wish to look up: ";
		getline(cin, name);
		
		//if (name == "\n")
		//{cout << "enter\n";}
		//if (name == " ")
		//{cout << "space\n";}
	//input check	cout << "\nentered:" << name << "1\n";
		for (int i = 0; i <= 1999; i++)
		{
			if (names[i] == name)
			{
				cout << names[i] << "'s phone number is: " << nums[i];
				break;
			}
			if (i==1999)
			{
				cout << name << " is not in the data base, sorry.";
			}
		}
		cout << "\n\nWould you like to find another phone number? (Y or N): ";
		cin >> letter;
		new_line();
	} while (toupper(letter) == 'Y');
	return 0;
}
void new_line() {
	char next;
	do {
		cin.get(next);
	} while (next != '\n');
}