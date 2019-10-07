#include <iostream>

using namespace std;

class ship
{
public:
	//ship();
	//virtual void print();
	void setship(string ship, string date);
	string getname();
	string getyear();
	string name;
	string year;
};
class cruise : public ship
{
public:
	virtual void print();
	void setcruise(int max, string name, string date);
	int getmax();
	int pas;
};
class cargo : public ship
{
public: 
	virtual void print();
	void setcargo(int tons, string name, string date);
	int gettons();
	int carg;

};
int main()
{
	ship l;
	cruise r;
	cargo s;
	char end;
	l.setship("lolipop", "1999");
	r.setcruise(5000, "Disney", "2000");
	s.setcargo(10, "Pearl", "1800");
//	l.print();
	r.print();
	s.print();
	cin >> end;
}
void cruise::print()
{
	//cout << "The ship name is " << name << endl; // find how to acess parent class variable
	cout << "The max passengers is " << pas << endl;
	cout << "______________________________\n";
}
void cargo::print()
{
	//cout << "The ship name is " << name << endl; // find how to acess parent class variable
	cout << "The max tonnage is " << carg << endl;
	cout << "______________________________\n";
}
//void ship::print()
//{
//	cout << "The ship name is " << name << endl;
//	cout << "The year it was build is " << year << endl;
//	cout << "__________________________________\n";
//
//}

string ship::getname()
{
	return name;
}
string ship::getyear()
{
	return year;
}
int cruise::getmax()
{
	return pas;
}
void ship::setship(string ship, string date)
{
	name = ship;
	year = date;
}
void cruise::setcruise(int max, string ship, string date)
{
	name = ship;
	pas = max;
	year = date;
}
void cargo::setcargo(int tons, string ship, string date)
{
	carg = tons;
	name = ship;
	year = date;
}