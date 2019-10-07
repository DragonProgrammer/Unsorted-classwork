#include <iostream>
using namespace std;

int main()
{
	// Disply Program Information
	cout << "AddHelloGoodbye Application\n";
	cout << "By: <yourname>\n";
	cout << "---------------\n\n";

	// Variable declaration
	char district, letter;
	double fee, tuition, total, lab, hours;

	// Begin your application here!
	cout << "Enter the number of credit hours: ";
	cin >> hours;
	cout << "Enter the number of labs: ";
	cin >> lab;
	cout << "Is the student ''in district'' (y or n):";
	cin >> district;
	
	//if statements
	if (hours > 18)
		hours = 18;
	if ((district == 'y') || (district == 'Y'))
		tuition = hours*70.00;
	if ((district == 'n') || (district == 'N'))
		tuition = hours*255.54;

	// final calculations
	fee = lab*85.00;
	total = lab + tuition;

	//output
	cout << "Tuition costs: " << tuition << "\n";
	cout << "Lab fees cost: " << fee << "\n";
	cout << "Your total payment: " << total << "\n";



	// Wait for the user to enter a character.
	cout << "\nEnter any character and hit return to end the program.\n";
	cin >> letter;

	return 0;
}