#include <iostream>
using namespace std;

int main()
{
	// Disply Program Information
	cout << "Loan Calculator\n";
	cout << "By: Michael Peterson\n";
	cout << "---------------\n\n";

	// Variable declaration
	char letter;
	double total_interest, years, rate, loan_value, consumer_needs, months, installments;
	// Begin your application here!
	cout << "Looks like you need some money. Let me help you figure out how big of a loan you will need.\n";
	cout << "Please enter all nubers in decimal format even if it is a whole number.\n";
	cout << "How much money do you need in the end:\n";
	cin >> consumer_needs;
	cout << "What is the interest rate on this loan:\n";
	cin >> rate;
	cout << "How long, in months, is this loan going to last:\n";
	cin >> months;
	years = months / 12;
	total_interest = years * rate;
	loan_value = consumer_needs / (1 - total_interest);
	cout << "You will need to make a loan of $";
	cout << loan_value;
	cout << " to get to the amount you need.\n";
	installments = loan_value / months;
	cout << "This amount will be paid to you in $";
	cout << installments;
	cout << ".\n";

	// Wait for the user to enter a character.
	cout << "\nEnter any character and hit return to end the program.\n";
	cin >> letter;

	return 0;
}