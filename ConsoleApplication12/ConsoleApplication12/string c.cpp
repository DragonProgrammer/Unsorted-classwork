#include <iostream>
#include <string>
#include <array>
using namespace std;
using std::string;
using std::cin;
class string
{
public:
	void create();
private:
	string s;
};
int size;
int main()
{
	int num;
	cin >> num;  // Number of elements
	string *str = new string[num];
	for (unsigned int i = 0; i < num; ++i)
		std::getline(cin, str[i]);
	return 0;
}
void create()
{
	cout << "How many stings will there be?\n";
	cin >> size;
	string *s = new string[size];
	for (int i = 0; i < size; i++)
	{ 
		std::getline(cin, str[i])
	}
}