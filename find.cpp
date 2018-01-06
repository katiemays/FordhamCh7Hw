// katie mays
// dec. 7, 2017
// find a number in 10000 elements

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int i, query;
	int nums[10000];
	bool find = false;

	srand(time(0));

	for (i = 0; i< 10000; i++)
	{
		nums[i] = rand();
	}

	// cheat by outputing first 10 random numbers
	for (i = 0; i < 10; i++)
	{
		cout << i+1 << ")\t" << nums[i] << endl;
	}
	cout << "Enter a query number : ";
	cin  >> query;

	// code to find query number in the array list
	for (i = 0; i < 9999; i++)
	{
		if (query == nums[i])
		{
			find = true;
			break;
		}
	}

	if (find == true)
	{
		cout << "number was found!" << endl;
	}
	if (find == false)
	{
		cout << "number was NOT found!" << endl;
	}
	return 0;
}
