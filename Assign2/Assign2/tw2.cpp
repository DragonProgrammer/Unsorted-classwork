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
	void logout(int iden);
	int search(int iden);
	void find(int iden);
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
	NodePtr temp;
	NodePtr tail;
	NodePtr here = head;
	NodePtr prior, next;
	};
int main()
{
	nodelist l;
	char end;
	int choice, lab, stat, id, iden;
	do
	{
		cout << "What do you want to do?\n" << "1) Simulate login\n" << "2) simulate logout\n" << "3) Find where a person is\n\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Enter the Id: ";
		cin >> id;
		cout << "Enter the lab: ";
		cin >> lab;
		cout << "Enter the station: ";
		cin >> stat;
		l.login(lab, stat, id);
		l.printlab();
		break;
	case 2:
		cout << "Enter the Id of the person logging out: ";
		cin >> iden;
		l.logout(iden);
		l.printlab();
		break;
	case 3:
		cout << "Who do you want to look up?\n";
		cin >> iden;
		l.find(iden);
		break;
	}
	cout << "Do more?";
	cin >> end;
	} while (toupper(end) == 'Y');
}
void nodelist::printlab()
{
	NodePtr here;
	here = head;
	cout << "Lab #     Computer Stations\n";
	for (int i = 1; i < 5; i++)
		{
			cout << i << "       ";
			if (i == 1)
			{
				for (int n = 1; n < 6; n++)
				{
					if (here != NULL && here->lab == i && here->station == n)
					{
						cout << n << ": " << here->id << "   ";
						here = here->link;
					}
					else
					{
						cout << n << ": empty  ";
					}
				}
				cout << endl;
			}
			else if (i == 2)
			{
				for (int n = 1; n < 7; n++)
				{
					if (here != NULL && here->lab == i && here->station == n)
					{
						cout << n << ": " << here->id << "   ";
						here = here->link;
					}
					else
					{
						cout << n << ": empty  ";
					}
				
				}
				cout << endl;
			}
			else if (i == 3)
			{
				for (int n = 1; n < 5; n++)
				{if (here != NULL && here->lab == i && here->station == n)
				{
					cout << n << ": " << here->id << "   ";
					here = here->link;
				}
				else
				{
					cout << n << ": empty  ";
				}
				}
				cout << endl;
			}
			else if (i == 4)
			{
				for (int n = 1; n < 4; n++)
				{
					if (here != NULL && here->lab == i && here->station == n)
					{
						cout << n << ": " << here->id << "  ";
						here = here->link;
					}
					else
					{
						cout << n << ": empty  ";
					}
				}
				cout << endl;
			}
		}
	//here = head;
	//int count = 1;
	//while (here != NULL)
	//{
	//	cout << "node " << count << "    " << "lab " << here->lab << "     "<< "station " << here->station << endl;
	//	here = here->link;
	//	count++;
	//}

	}
void nodelist::login(int lab, int stat, int id)
{
	
	prior = new node;
	next = new node;
	tail = new node;
	temp = new node;
	//head = new node;
	prior = head;
//	next = head->link;
	temp->lab = lab;
	temp->station = stat;
	temp->id = id;
	temp->link = NULL;
	here = head;
	while (here != NULL)
	{
		if (here->link == NULL) // Establishes tail
		{
			tail = here;
		}
		here = here->link;
	}
	//cout << "tail is " << tail->lab << "  " << tail->station << endl;

	if (head == NULL) // insert first 
	{
		head = temp;
		
	}
	else if ((head->lab > temp->lab)|| ((head->lab == temp->lab) && (head->station > temp->station))) // insert at head
	{
		temp->link = head;
		head = temp;
		//cout << head->lab << endl;
		//cout << "Here i am\n";
		//delete(temp);
		//cout << head->lab << endl;
	}
	else if (tail->lab < temp->lab ||(tail->lab == temp->lab && tail->station < temp->station))// insert after tail
	{
		//cout << "tail is " << tail->lab << "  " << tail->station << endl;
		tail->link = temp;
		tail = temp;
	//	cout << "Here i am2\n";
		
	}
	else // insert within a point
	{
		next = head->link;
		int flag = 0;
		while (next != NULL && flag == 0)
		{
			if ((prior->lab < temp->lab) && (temp->lab < next->lab)
				|| ((prior->lab == temp->lab) && (temp->lab == next->lab) && (prior->station < temp->station) && (temp->station < next->station))
				|| ((prior->lab == temp->lab) && (temp->lab < next->lab) && (prior->station < temp->station)))
			{
				prior->link = temp;
				temp->link = next;
				flag = 1;
			//	cout << "Here i am3\n";
				//delete (temp);
			}
			else
			{
				//cout << "HI ";
				prior = next;
				next = next->link;
				}
		}
	}
	
}
void nodelist::logout(int iden)
{
	NodePtr here = head;
	if (here == NULL) // specail condition no list
	{
		cout << "No data\n";
		return;
	}
	if (here->id == iden && here == head)// removes the head node if it is the value
	{
		head = here->link;
	}
	else // remove a node from insde link list
	{
		int pos;
		pos = search(iden);
		NodePtr temp1 = head;
		NodePtr temp2;
		for (int i = 0; i < pos - 2; i++)
		{
			temp1 = temp1->link; //temp one now points to the node before the delete
		}
		temp2 = temp1->link;
		temp1->link = temp2->link;
		delete (temp2);
	}
}
int nodelist::search(int iden) // search list for input and tells where it is
{
	int position = 1;
	NodePtr here = head;
	if (here == NULL) // specail condition no list
	{
		return NULL;
	}
	else
	{
		while (here->id != iden && here->link != NULL) // steps through list to see if item is there, 
												   //stops list once found or at end
		{
			here = here->link;
			position++;
		}
		if (here->id == iden)
		{
			return position;
		}
		else
		{
			return NULL;
		}
	}
}
void nodelist::find(int iden)
{
	NodePtr here = head;
	/*if (here->id == iden)
	{
		cout << "Student " << here->id << " is in Lab " << here->lab << " at station " << here->station << endl;
	}*/
	while (here != NULL) // steps through list to see if item is there, 
											   //stops list once found or at end
	{
		if (here->id == iden)
		{
			cout << "Student " << here->id << " is in Lab " << here->lab << " at station " << here->station << endl;
			return;
		}
		else
		{
			here = here->link;
		}
	}
	if (here == NULL)// if not found
	{
			cout << "This person is not on a computer";
		}
	
}