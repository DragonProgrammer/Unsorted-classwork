#include <iostream>
#include <string>
using std::string;
using std::cin;



class String
{

public:

	//default constructor

	void Create();
	void addString(int element); 
	void removeString(int element); //have works
	bool isMember(int element); // have works

	void Union(vector<string> s); //working on

					   //set difference modifiers current set

	int size(); //have not tested

	int getElement(int i, int set); // have works

private:

	string s[100];

	//next empty position in elements

	int next = 0;

};
String n, m, u;
void create()
{
	int size;
	cout << "How many strings are there?\n";
		cin >> size;
		for (int i = 0; i < size; i++)
		{
		for (int i = 0; i < size; ++i)
		getline(cin, s[i]);
		cout << "Enter a string: ";
		}
	
	
	cout << "Enter a string of words:\n";
	getline(cin, s);
}