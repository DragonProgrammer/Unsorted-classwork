#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	// Disply Program Information
	cout << "Average of File Application\n";
	cout << "By: Mike Peterson\n";
	cout << "---------------------------\n\n";

	// Variable declaration
	char letter, next;
	ifstream in_stream;
	int vowel = 0, consonants = 0, white = 0;


	// Begin your application here!
	in_stream.open("vowels.txt");
	if (in_stream.fail())
	{
		cout << "Input file opening failed.";
		cout << "\nEnter any character and hit return to end the program.\n";
		cin >> letter;
		exit(1);
	}
	
		in_stream.get(next);
		while (!in_stream.eof())
		{
			next = toupper(next);
			if (next == ' ')
			{
				white++;
			}
			else if (next == 'A' || next == 'E' || next == 'I' || next == 'O' || next == 'U' || next == 'Y')
			{
				vowel++;
			}
			else
			{
				consonants++;
			}
			
			in_stream.get(next);
		}
		in_stream.close();
		cout << "The input file has the following counts:\n" << "Vowels " << vowel << "\n" << "Consonants " << consonants
			<< "\n" << "Spaces " << white << "\n" << "End program.";
	// Wait for the user to enter a character.
	cout << "\nEnter any character and hit return to end the program.\n";
	cin >> letter;

	return 0;
}