#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

class Set {

public:

	//default constructor

	void CreateSet();
	void addElement(int element); //have works
	void removeElement(int element); //have works
	bool isMember(int element); // have works

	void Union(Set s); //working on

	//set difference modifiers current set

	void diffeence(Set s);

	int size(); //have not tested

	int getElement(int i, int set); // have works

private:
	
	//binary search for element, returns index

	void search(int element, int& index); //  cant cal within main

	//set members

	int elements[100];

	//next empty position in elements

	int next =0;
	
};

void printSet(int set);

void generateSample(int sample[], int n);
void run(int sample[], int n);
//globals
Set s, z, u;
int test, set;
int main()
{
	int index, element, choice, i;
	char letter;
	do
	{
		cout << "What would you like to do with the set?\n" << "1) Create the base set\n" << "2) Creat the set to run differance or union with\n"
			<< "3) Make a union between sets\n" << "4) See what is different between the sets\n" << "5) View a set\n"
			<< "6) Find out what is at a spot in the set\n" << "7) See if a number is in the set\n"
			<< "8) Add a number to the set\n" << "9) Remove an element\n"; //<< "10) Find the location of an element if it exists in set\n";
			cin >> choice;
		switch (choice)
		{
		case 1:
			z.CreateSet();
			break;
		case 2:
			s.CreateSet();
			break;
		case 3:
			z.Union(s);
			break;
		case 4:
			z.diffeence(s);
			break;
		case 5:
			cout << "What set do you want to see?\n" << "1) base set\n" << "2) the set to work with\n" << "3) both\n";
			cin >> set;
			printSet(set);
			break;
		case 6:
			cout << "What index in set would you like to know? Remember that the first element is indexed at 0.";
			cin >> i;
			cout << z.getElement(i, 1) << " is at index point " << i << endl;
			break;
		case 7:
			cout << "What number would you like to check for in the set?";
			cin >> element;
			z.isMember(element);
			if (test == 1)
			{
				cout << element << " is part of the set.";
			}
			else
			{
				cout << element << " is not part of the set.";
			}
			break;
		case 8:
			cout << "Type a number to add to set:";
			cin >> element;
			z.addElement(element);
			break;
		case 9:
			cout << "What element do you want to remove from set?\n" << "Make sure to check that it is in set first.\n";
			cin >> element;
			z.removeElement(element);
			break;
//		case 10:
//			cout << "What element do you want to search for?";
	//		cin >> element;
	//		z.search(element, index);
		//	cout << element << " is at index point " << index << endl;
		//break;
		}
		cout << "\nDo you want to do more?(Y or N)\n";
		cin >> letter;
	} while (toupper(letter) == 'Y');
}
void Set::addElement(int element)
{
	elements[next] = element;
	next++;
}
int Set::getElement(int i, int set)
{
switch(set)
	{
		case 1:
			return z.elements[i];
			break;
		case 2:
			return s.elements[i];
			break;
		case 4:
			return u.elements[i];
			break;
	}
}
bool Set::isMember(int element)
{
	for (int i = 0; i < next; i++)
	{
		if (elements[i] == element)
		{
			test = 1;
			return true;
		}
		else
		{
			test = 0;
		}
	}
			return false;
	}
void Set::removeElement(int element)
{
	int index;
	for (int i = 0; i < next; i++)
	{
		if (elements[i] == element)
		{
			index = i;
			break;
		}
	}
	for (int i = index; i < next-1; i++)
	{
		elements[i] = elements[i + 1];
	}
	next--;
}
int Set::size()
{
	int size = 0;
	//elements[next] = 0;
	for (int i=0; i < next; i++)
	{
		size++;
	}
	return size;
}
void printSet(int set) {
	int i;
	switch (set)
	{
	case 1:
		cout << "The first set is: "; 
		for (i = 0; i<z.size(); i++) {
			cout << z.getElement(i,1) << " ";
		}
		cout << "\n";
		break;
	case 2:
		cout << "The second set is: ";
		for (i = 0; i<s.size(); i++) {
			cout << s.getElement(i,2) << " ";
		}
		cout << "\n";
		break;
	case 3:
		cout << "The first set is: ";
		for (i = 0; i<z.size(); i++) {
			cout << z.getElement(i, 1) << " ";
		}
		cout << "\n";
		cout << "The second set is: ";
		for (i = 0; i<s.size(); i++) {
			cout << z.getElement(i, 2) << " ";
		}
		cout << "\n";
		break;
	case 4:
		cout << "The union set is: ";
		for (i = 0; i<u.size(); i++) {
			cout << z.getElement(i, 4) << " ";
		}
		break;
	}
}
void Set::search(int element, int& index)
{
	s.isMember(element);
	if (test == 1)
	{
		cout << element << " is part of the set.\n";
	}
	else
	{
		cout << element << " is not part of the set.\n\n";
		return;
	}
	for (int i = 0; i < next; i++)
	{
		if (elements[i] == element)
		{
			index = i;
		}
	}
	//cout << element << " is at index point " << index << endl;
}
void Set::CreateSet ()
{
	int size, element;
	cout << "How big is the set?\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter an element: ";
		cin >> element;
		addElement(element);
	}
}
void Set::Union(Set s)
{
	int element;
	set = 3;
	printSet(set);
	for (int i = 0; i < z.next; i++)
	{
		element = z.elements[i];
		u.addElement(element);
	}
	set = 4;
	printSet(set);
	for (int i = 0; i < s.next; i++)
	{
		element = s.elements[i];
		z.isMember(element);
		if (test == 0)
		{
			cout << element << " ";
		}
	}
	cout << endl;
}
void Set::diffeence(Set s)
{
	int element;
	set = 3;
	printSet(set);
	cout << "The differnce beween the sets is: ";
	for (int i = 0; i < s.next; i++)
	{
		element = s.elements[i];
		z.isMember(element);
		if (test == 0)
		{
			cout << element << " ";
		}
	}
	for (int i = 0; i < z.next; i++)
	{
		element = z.elements[i];
		s.isMember(element);
		if (test == 0)
		{
			cout << element << " ";
		}
	}
	cout << endl;
}