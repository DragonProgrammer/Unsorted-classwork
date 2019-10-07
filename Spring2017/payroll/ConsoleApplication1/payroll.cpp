#include <iostream>;
#include <iomanip>
using namespace std;

class Payroll // Payroll class with functions to get data, compute data, and output data 
{
public:
	void gethours(int h); // input function
	void getpay(double p); // input function
	void computegross(int h, double p); // computation function
	void displaygross(); // output function
private:
	int h; // input variable
	double p; // input variable
	double gross; //computed variable
	};

int main()
{
	char letter;
	int h;
	double p;
	Payroll Employees[7];

	cout << "To compute the gross pay, please enter the hours worked and pay rate for your 7 employees.\n";
	for (int i = 0; i < 7; i++) // input loop to populate class array
	{
		cout << "\nEmployee " << i+1 << "'s pay rate:";
		cin >> p;
		Employees[i].getpay(p);
		cout << "Employee " << i+1 << "'s hours rate:";
		cin >> h;
		if (h > 60)// check to make sure hours is not more then 60
		{
			do 
			{
				cout << "Please enter a number less than 60: ";
				cin >> h;
			} while (h > 60);
		}
		Employees[i].gethours(h);
		Employees[i].computegross(h, p);
	}
	cout << "\n\nEmployee Gross Pay:\n";

	for (int i = 0; i < 7; i++) // loop to display class array data
	{
		cout << "Employee " << i + 1 << "'s gross pay is: $";
		Employees[i].displaygross();
			cout << endl;
	}
	cout << "press any key to end";
	cin >> letter;
}
void Payroll::gethours(int h) // this function gets the hours
{
	h = h;
}
void Payroll::getpay(double p) // this function gets the pay rate in decimal format
{
	p = p;
}
void Payroll::computegross(int h, double p) // this function computes gross pay and sets it in class for latter
{
	gross = h*p;
}

void Payroll::displaygross() // this function displays the gross pay
{
	cout << setprecision(2) << fixed << gross; // display with 2 dicimal points
}