#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;
ifstream fone, ftwo; // inpute streams
int test; // global for bool
char letter; // global for ending
vector<string> vque; // global vector, could not get it to do q.set[i]
class words
{
public:
	void create1(ifstream& fone);
	void create2(ifstream& ftwo);
	//void createvone(ifstream& fone, vector<string> vone);
	void createquary(vector<string> vque);
	bool isMember(string search);
	double compare(int choice, vector<string> vque);
	double size();
	double sizeq(vector<string> vque);
	double cosine(double size1, double size2, double num);
private:
	vector<string> set;
};
words m, n; //q was to be querry vector bud did not work
void getstream(ifstream& fone, ifstream& ftwo);
int main()
{
	//int choice;
	double size1, size2, size3, num1, num2; // size denoting the size of the vectors, 
											//num being the number of elements the same between the vector and querry
	getstream(fone, ftwo);
	m.create1(fone);
	n.create2(ftwo);
	size1 = m.size();
	size2 = n.size();
	m.createquary(vque);
	size3 = m.sizeq(vque);
	num1 = m.compare(1, vque);
	num2 = m.compare(2, vque);
	cout << "The coeficient of similarity betwen the querry and the first doc is \n" << m.cosine(size1, size3, num1) << " .\n";
	cout << "The coeficient of similarity betwen the querry and the second doc is \n" << m.cosine(size2, size3, num2) << " .\n";
	cin >> letter;

}
void getstream(ifstream& fone, ifstream& ftwo)
{
	fone.open("doc1.txt");
	if (fone.fail())
	{
		cout << "There was an error while trying to open doc1.txt!\n";
		cout << "Enter any character and hit return to end the program.\n";
		cin >> letter;
		exit(1);
	}
	ftwo.open("doc2.txt");
	if (fone.fail())
	{
		cout << "There was an error while trying to open doc1.txt!\n";
		cout << "Enter any character and hit return to end the program.\n";
		cin >> letter;
		exit(1);
	}
}
void words::create1(ifstream& fone)
{
	while (!fone.eof())
	{
		string str;
		std::getline(fone, str);
		set.push_back(str);
	}
}

void words::create2(ifstream& ftwo)
{
	while (!fone.eof())
	{
		string str;
		std::getline(fone, str);
		set.push_back(str);
	}
}
void words::createquary(vector<string> vque)
{
	cout << "Create a vector of words to compare to documents.";
	do
	{
		cout << "Enter a word:   ";
		string str;
		//cin >> str;
		std::getline(cin, str);
		vque.push_back(str);
		cout << "More? (Y/N): ";
		cin >> letter;
		cin.ignore(1);
	} while (toupper(letter) == 'N');
}
double words::compare(int choice, vector<string> vque)
{
	double count;
	string element;
	for (int i = 0; i < m.sizeq(vque); i++)
	{
		string element;
		element = vque[i];
		if (choice == 1)
		{
			m.isMember(element);
			if (test == 1)
			{
				count++;
			}
		}
		else {
			n.isMember(element);
			if (test == 1)
			{
				count++;
			}
		}
	}
	return count;
}
bool words::isMember(string search)
{
	for (int i = 0; i < size(); i++)
		if (set[i] == search)
		{
			cout << "found " << search << endl;
			test = 1;
			return true;
		}
		else
			test = 2;
	return false;
}
double words::size()
{
	return set.size();
}
double words::sizeq(vector<string> vque)
{
	return vque.size();
}

double words::cosine(double size1, double size2, double num)
{
	double cosine, numer, sqr1, sqr2; // the numerator and the squars of size, and cosine to return
	cout << size1 << endl;
	cout << size2 << endl;
	sqr1 = sqrt(size1);
	sqr2 = sqrt(size2);
	cout << sqr1 << endl;
	cout << sqr2 << endl;
	numer = sqr1*sqr2;
	cout << numer << endl;
	cosine = num / numer;
	cout << cosine << endl;
	return num / numer;


}