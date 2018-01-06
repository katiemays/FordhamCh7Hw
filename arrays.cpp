//Katie Mays
//Nov 27 2017
//intro to arrays

#include <iostream>
using namespace std;

int main()
{
	//local variables
	int i;
	int counter = 0;
	double grades[100]; /* number in brackets is dimension of size of the array, max*/
	double average, sum, temp;
	
	//init
	for (i=0; i < 100; i++) /* make each slot of the arrays 0*/
	{
		grades[i] = 0;
	}

	//input
	for (i=0; i < 100; i++)
	{
		cout << "Enter a student grade (0 - 100) : ";
		cin  >> temp;

		if (temp != -1)
		{
			grades[i] = temp;
			counter++;
		}
		else 
		{
			break;
		}
	}

	//output
	for (i=0; i < counter; i++)
	{
		cout << grades[i] << endl;
	}

	//processing
	sum = 0;
	average = 0;

	for (i=0; i < counter; i++)
	{
		sum = sum + grades[i];
	}

	average = sum / counter;
	cout << "The average of the grades was " << average << endl;

	return 0;
}
