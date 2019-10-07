#include <iostream>
#include <cstddef> 
#include <iomanip>

using namespace std;

class nodelist
{
public:
	void initialize();
	void printlab();
	void login(int lab, int stat, int id);
	void logout();
	void search(int id);
private:
	struct node
	{
		int lab;
		int station;
		int id;
		node* link;
	};
	typedef node* NodePtr;
	NodePtr head = NULL;
};
int main()
{
	nodelist l;
	int lab, stat, id;
}
void nodelist::printlab()
{
	int lab;
	if (head = NULL)
	{
		cout << "Lab #     Computer Stations\n";
		for (int i = 1; i < 5; i++)
		{
			cout << i << "       ";
			if (i == 1)
			{
				for (int n = 1; n < 6; n++)
				{
					
					cout << n << ": empty";
				}
				cout << endl;
			}
			else if (i == 2)
			{
				for (int n = 1; n < 7; n++)
				{
					cout << n << ": empty";
				}
				cout << endl;
			}
			else if (i == 3)
			{
				for (int n = 1; n < 5; n++)
				{
					cout << n << ": empty";
				}
				cout << endl;
			}
			else if (i == 4)
			{
				for (int n = 1; n < 4; n++)
				{
					cout << n << ": empty";
				}
				cout << endl;
			}
		}
		/*<< "1        1: empty 2: empty 3: empty: 4: empty: 5: empty\n"
			<< "2        1: empty 2: empty 3: empty 4: empty: 5: empty 6: empty\n"
			<< "3        1: empty 2: empty 3: empty 4: empty\n"
			<< "4        1: empty 2: empty 3: empty\n";*/
	}
	else
	{
		
	}
}
void nodelist::login(int lab, int stat, int id)
{
	NodePtr temp;
	NodePtr tail;
	NodePtr here = head;
	NodePtr prior, next;
	prior = new Node;
	next = new node;
	tail = new node;
	temp = new node;
	temp->lab = lab;
	temp->station = station;
	temp->id = id;
	temp->link = NULL;
	if (head == NULL)
	{
		head = temp;
		delete(temp);
	}
	if (head->lab > temp->lab OR(head->lab == temp->lab && head->station > temp->station)
	{
		temp->link = head;
		head = temp;
		delete(temp)
	}
	
	while (here != NULL)
	{
		//cout << here->d << endl;
		here = here->link;
		if ( here->link == NULL)
		{
			tail = here;
		}
	}
	if (tail->lab < temp->lab OR(tail->lab == temp->lab && tail->station < temp->station)
	{
		tail->link = temp;
		tail = temp;
		delete (temp)
	}

prior = head;
next = head->link;
while (next != NULL)
{
if (prior->lab < temp->lab < next->lab
	OR(prior->lab = = temp->lab = = next->lab && prior->station < temp->station < next->station)
	OR(prior->lab = = temp->lab < next->lab && prior->station < temp->station))
{
	prior->link = temp;
	temp->link = next;
	delete (temp);
}
else
{
	next = next->link;
	prior = next;
}
}
}