// katie mays
// dec 4, 2017
// sort an array of integers

#include <iostream>
using namespace std;

// prototypes
void sort_array(int[]);

int main()
{
	// variables
	int numbers[10], i;

	// input
	for (i = 0; i < 10; i++)
	{
		cout << "Enter a number : ";
		cin  >> numbers[i];
	}
	
	// output original array
	for (i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	sort_array(numbers);

	// output sorted array
	for (i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}

	return 0;
}

void sort_array(int a[])
{
	// smallest to largest sort
	// assume first is smallest number
	int temp=0, minimum=0;

   for(int j=0; j<10; j++)
   {
	minimum= a[j];
 	
	for(int i=j+1; i<10; i++)
	{
	   if (a[i] < minimum)
	   {
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;

		minimum = a[j];
	   }  
	}
   }  
}
