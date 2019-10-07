
#include <iostream>
#include <cstddef> 
#include <iomanip>

using namespace std;

class nodelist
{
public:
	void addnode(double x);
	bool isMember(double x);
	void show();
	void remove(double x);
	int search(double x);
	void reverse();
	void clear();
private:
	double x;
	struct Node
	{
		double d; // the double in the list gained from double x in nodelist
		Node *link; // pointer to next node, used to see if there is a next
	};
	typedef Node* NodePtr;
	NodePtr head = NULL;
};
int main()
{
	char end;
	double inp;
	int choice;
	nodelist a;

	do
	{
		cout << "WHat do you want to do?\n" << "1) Add a node to the list\n"
			<< "2) See if a number is in the list\n" << "3) Print out the list of nodes\n"
			<< "4) Remove an item from the list\n" << "5) Get the position of a number\n" 
			<< "6) Reverse the list\n" << "7) Clear entire list" << "\n\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter a number to add to the list, it may be a decimal: ";
			cin >> inp;
			a.addnode(inp);
			a.addnode(1);
			a.addnode(7);
			a.addnode(9);
			a.addnode(5);
			break;
		case 2:
			cout << "What number do you want to look for? ";
			cin >> inp;
			a.isMember(inp);
			break;
		case 3:
			cout << endl;
			a.show();
			break;
		case 4:
			cout << "Enter a number to remove from the list: ";
			cin >> inp;
			a.remove(inp);
			break;
		case 5:
			cout << "Enter an number to find its position: ";
			cin >> inp;
			if (a.search(inp) == NULL)
			{
				cout << "Not in list";
			}
			else
			{
				cout << inp << " is at position " << a.search(inp) << " in list.\n";
			}

			break;
		case 6:
			a.reverse();
			break;
		case 7:
			a.clear();
			break;
		}
		cout << "Do you want to do more? ";
		cin >> end;
	} while (toupper(end) == 'Y');
	return 0;

}
void nodelist::addnode(double x)
{
	//Insert items into list at front
	NodePtr temp;
	temp = new Node;
	temp->d = x;
	temp->link = head;
	head = temp;
}
void nodelist::show()
{
	//displays list from last item entered to first
	NodePtr here = head;
	while (here != NULL)
	{
		cout << here->d << endl;
		here = here->link;
	}
}
bool nodelist::isMember(double x) // Searches list to see if input is in it
{
	NodePtr here = head;
	if (here == NULL) // specail condition no list
	{
		cout << "No data\n";
		return false;
	}
	else
	{
		while (here->d != x && here->link != NULL) // steps through list to see if item is there, 
												   //stops list once found or at end
		{
			here = here->link;
		}
		if (here->d == x)
		{
			cout << x << "has been found\n";
			return true;
		}
		else
		{
			cout << x << "has not been found\n";
			return false;
		}
	}
}
int nodelist::search(double x) // search list for input and tells where it is
{
	int position = 1;
	NodePtr here = head;
	if (here == NULL) // specail condition no list
	{
		return NULL;
	}
	else
	{
		while (here->d != x && here->link != NULL) // steps through list to see if item is there, 
												   //stops list once found or at end
		{
			here = here->link;
			position++;
		}
		if (here->d == x)
		{
			return position;
		}
		else
		{
			return NULL;
		}
	}
}
void nodelist::remove(double x)
{
	NodePtr here = head;
	if (here == NULL) // specail condition no list
	{
		cout << "No data\n";
		return;
	}
	if (here->d == x && here == head)// removes the head node if it is the value
	{
		head = here->link;
	}
	else // remove a node from insde link list
	{
		int pos;
		pos = search(x);
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
void nodelist::reverse() // reverses the linked list
{
	NodePtr cur = head;
	NodePtr prev = NULL;
	NodePtr next;
	int size = 1;
	
	while (cur != NULL)
	{
		next = cur->link;
		cur->link = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
}
void nodelist::clear() //clears the linked list
{
	//struct node* temp;
	NodePtr temp = head;
	while (temp != NULL)
	{
		temp = head->link;
		delete (head);
			head = temp;
	}
}