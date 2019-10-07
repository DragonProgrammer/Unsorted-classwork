#include <iostream>
using namespace std;

int main()
{
	// Disply Program Information
	cout << "Math App\n";
	cout << "By: Michael Peterson\n";
	cout << "---------------\n\n";

	// Variable declaration
	char letter;
	double num1, num2, sum, dif, prod;
	// Precision declaration.
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	// Begin your application here!
	cout << "Lets do some math.\n";
	cout << "Please insert all numbers in decimal format.\n";
	cout << "+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+\n";
	// input
	cout << "Name a number:";
	cin >> num1;
	cout << "Name a new number:";
	cin >> num2;
	cout << "+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+\n";
	// math
	sum = num1 + num2;
	dif = num1 - num2;
	prod = num1 * num2;
	// Output
	cout.width(20);
	cout << left << "The sum if these two numbers is:";
	cout.width(12);
	cout << right << sum;
	cout << ".\n";
	cout.width(20);
	cout << left << "The differance of these two numbers is:";
	cout.width(12);
	cout << right << dif;
	cout << ".\n";
	cout.width(20);
	cout << left << "The product if these two numbers is:";
	cout.width(12);
	cout << right << prod;
	cout << ".\n\n";
	// output scientific
	cout << "Lets do these numbers  in scientifici notation.\n";
	cout.width(20);
	cout << left <<	"In scientific notation the sum is:";
	cout.width(12);
	cout << scientific << right << sum;
	cout << ".\n";
	cout.width(20);
	cout << left << "In scientific notation the differance is:";
	cout.width(12);
	cout << scientific << right << dif;
	cout << ".\n";
	cout.width(20);
	cout << left << "In scientific notation the product is:";
	cout.width(12);
	cout << scientific << right << prod;
	cout << ".\n";
	cout << "+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+-*-+\n";
	cout << "Ok. That is enough math for now.\n";


	// Wait for the user to enter a character.
	cout << "\nEnter any character and hit return to end the program.\n";
	cin >> letter;

	return 0;
}