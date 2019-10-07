#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <array>
#include <cmath>
using namespace std;
class stringSet
{
public:
	//void create(int option);
	void create();
	void addString(string input);
	void printstrings();
	int size();
	void removestring();
	void operator * (stringSet s);
	void operator + (stringSet s);
	bool isMember(string search);
	void clear();
	double binary();
private:
	int next = 0;
	string set[100];
};
string input;
int test;
stringSet s,n, u, t;

int main()
{
	int option;
	char ch;
	do
	{
		cout << "What do you want to do:\n" << "1) Create an array of strings\n" << "2) Add a string to the array\n"
			<< "3) Remove a string from the array\n" << "4) Find the number of strings in the array\n" << "5) Veiw all strings in the array\n"
			<< "6) Create a secondary array\n" << "7) Create a union between the sets\n"
			<< "8) See what strings are the same between arrays\n" << "9) FInd the similarity coeficient between the strings\n"
			<< "10) Clear the arrays\n";
		cin >> option;
		switch (option)
		{
		case 1:
			s.create();
			break;
		case 2:
			cin.ignore();
			cout << "Enter the new string:\n";
			getline(cin, input);
			s.addString(input);
			break;
		case 3:
			s.removestring();
			break;
		case 4:
			cout << "There are " << s.size() << " strings in the array.\n";
			break;
		case 5:
			s.printstrings();
			break;
		case 6:
			n.create();
			//cout << endl;
			//n.printstrings();
			break;
		case 7:
			s+n;
			break;
		case 8:
			n*s;
			break;
		case 9:
			cout << "The similarity coificient between these sets is " << s.binary()<< endl;
			break;
		case 10:
			s.clear();
			n.clear();
			break;
		}
		//cout << "I got here2\n";
		cout << "Do you want to do more (y or n)? ";
		cin >> ch;
	} while (tolower(ch) == 'y');
	return 0;
	};
void stringSet::create()
{
	int num;
	cout << "How many strings will there be: ";
	cin >> num;  
	cin.ignore();
	string* str = new string[num];
	for (int i = 0; i < num; ++i)
	{
		cout << "Enter string " << i + 1 << ":\n";
		getline(cin, input);
		addString(input);
	}
};

void stringSet::addString(string input)
{
set[next] = input;
next++;
}
void stringSet::printstrings()
{
	for (int i = 0; i <= next - 1; i++)
	{
		cout << set[i] << endl;
	}
}
int stringSet::size()
{
	return next;
}
void stringSet::removestring()
{
	int index;
	cout << "At what position do you want to remove a string (remember it starts a 0)?\n";
	cin >> index;
	for (int i = index; i <= next - 1; i++)
	{
		set[i] = set[i + 1];
	}
	next--;
}
void stringSet::operator + (stringSet u)
{
	string element;
	cout << "The union of both sets is:\n";
	s.printstrings();
	for (int i = 0; i < n.next; i++)
	{
		element = n.set[i];
		s.isMember(element);
		if (test == 2)
		{
			cout << element << endl;
		}
	}
	
}
bool stringSet::isMember(string search)
{
	for (int i = 0; i < next; i++)
		if (set[i] == search)
		{
			//cout << "found " << search << endl;
			test = 1;
			return true;
		}
		else
			test = 2;
			return false;
}
void stringSet::operator *(stringSet s)
{
	string element;
	int temp = 0;
	cout << " The intersection between the sets is:\n";
	for (int i = 0; i < n.next; i++)
	{
		test = 0;
		element = n.set[i];
		s.isMember(element);
		if (test == 1)
		{

			//cout << "found";
			cout << element << endl;
		}
	}
	//cout << "THe intersection between the sets is:\n";
	//t.printstrings();
}
void stringSet::clear()
{
	for (int i = 0; i < next; i++) {
		set[i].clear();
	}
	next = 0;
}
double stringSet::binary()
{
	string element;
	double count = 0;
	double size1, size2, root1, root2, sim, denom;
	size1 = s.size
	();
	//cout << size1 << endl;
	size2 = n.size();
	//cout << size2 << endl;
	for (int i = 0; i < n.next; i++)
	{
		element = n.set[i];
		s.isMember(element);
		if (test == 1)
		{
			count++;
			test = 0;
		}
	}
	//cout << count << endl;
	root1 = sqrt(size1);
	//cout << root1 << endl;
	root2 = sqrt(size2);
	//cout << root2 << endl;
	denom = root1*root2;
	//cout << denom << endl;
	sim = count / denom;
	//cout << sim << endl;
	return sim;
}