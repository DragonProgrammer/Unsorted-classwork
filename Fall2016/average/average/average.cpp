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
	char letter;
	ifstream in_stream;
	double next, average, sum = 0;
	int count = 0;


	// Begin your application here!
	in_stream.open("data1.txt");
	if (in_stream.fail())
	{
		cout << "Input file opening failed.";
		exit(1);
	}
	while (in_stream >> next)
	{
		sum = sum + next;
		count++;
	}
	average = sum / count;
	cout << "The average of all of the numbers in the file is " << average << ".\n" << "End program.\n";
	// Wait for the user to enter a character.
	cout << "\nEnter any character and hit return to end the program.\n";
	cin >> letter;

	return 0;
}