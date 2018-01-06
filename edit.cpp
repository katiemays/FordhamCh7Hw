//Katie Mays
//Dec. 7, 2017
//LAB9: number search and query

#include <iostream>
using namespace std;

// prototypes
void swap(int [], int, bool);

int main()
{
	// variables
	int integers[6]={0}, query;
	bool found = false;

	// input
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter input number " << i + 1 << " : ";
		cin  >> integers[i];
	}
	
	for (int i = 0; i < 6; i++)
	{
	cout << "Enter a query : ";
	cin  >> query;

	swap(integers, query, found);
	
	}
	if (found == false)
	{
		cout << query << " was not found" << endl;
	}
	if (integers[0] == 0 && integers[1] == 0 && integers[2] == 0 && integers[3] == 0 && integers[4] == 0 && integers[5] == 0 && integers[6] == 0)
	{
		cout << "Goodbye!" << endl;
	}

	return 0;
}

void swap(int a[], int q, bool f)
{


	do
	{
	for (int i = 0; i < 6; i++)
	{
		if (a[i] == q)
		{
			cout << q << " was at location " << i+1 << endl;
			a[i] = 0;
			f = true;
			break;
		}
	}		
	}while (f == false);	
	
	cout << "Current list : ";

	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

