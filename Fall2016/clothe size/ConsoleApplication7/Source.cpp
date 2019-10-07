
#include <iostream>
#include <cmath>
using namespace std;

//global declaration
double height, weight, age, jacket, hat, waist;
//Size Functions
double Hsize(double weight, double height)
{
	hat = (weight / height);
	hat = hat * 2.9;
	return hat;
}
double Jsize(double height, double age, double weight)
{
	int aage;
	if (age > 39)
	{
		aage = (age - 30) / 10;
	}
	else
	{
		aage = 0.0;
	}
	jacket = ((height*weight) / 288) + (aage*0.125);
	return jacket;
}
double Wsize(double weight, double age)
{
	int aage;
	if (age > 29)
	{
		aage = (age - 28) / 2;
	}
	else
	{
		aage = 0.0;
	}
	//cout << "test2";
	waist = (weight / 5.7) + (aage*0.1);

	return waist;
}

// main program
int main()
{
	//Notation set
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	// Disply Program Information
	cout << "Clothing Size\n";
	cout << "By: Mike Peterson\n";
	cout << "---------------\n\n";

	// Variable declaration
	char letter;

	// Begin your application here!
	do
	{
		cout << "Enter your height in inches: ";
		cin >> height;
		cout << "Enter your weight in pounds: ";
		cin >> weight;
		cout << "Enter your age in years: ";
		cin >> age;
		
		cout << "\nYour  Hat Size is " << Hsize(weight, height);
		cout << "\nYour Jacket Size is " << Jsize(height, age, weight);
		//cout << "test";
		cout << "\nYour Waist Size is " << Wsize(weight, age);
		cout << "\nWould you like to run the program again (Y or N)?";
		cin >> letter;
	} while (letter == 'Y' || letter == 'y');
	return 0;
}