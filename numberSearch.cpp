//Katie Mays
//Dec. 7, 2017
//LAB9: number search and query

#include <iostream>
using namespace std;

// prototypes
void swap(int [], int);

int main()
{
	// variables
	int integers[6]={0}, query;

	// input
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter input number " << i + 1 << " : ";
		cin  >> integers[i];
	}

	// processing and output
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter a query number : ";
		cin  >> query;

		swap(integers, query);
	}

	cout << "Goodbye!" << endl;

	return 0;
}

void swap(int a[], int q)
{
	for (int i = 0; i < 6; i++)
	{
		if (a[i] == q)
		{
			cout << q << " was at location " << i+1 << endl;
			a[i] = 0;
			break;
		}
	}	

	cout << "Current list : ";

	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

