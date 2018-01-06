// Katie Mays
// nov 30, 2017
// double arrays stadium seating

#include <iostream>
using namespace std;

// prototype
void seat_display();

#define MAX_ROW  6
#define MAX_COLM 6

char seats[MAX_ROW][MAX_COLM];

int main()
{
	//variables
	int colm, row;
	string assign;
	char rownum, colmlet;

	//initialize
	for (row = 0; row < MAX_ROW; row++)
	{
		for (colm = 0; colm < MAX_COLM; colm++)
		{
			seats[row][colm] = 'a' + colm;
		}
	}	

	do {
		system("clear");
		seat_display();
		cout << endl;

		//input
		cout << "Enter a seat assignment or 'q' to quit : ";
		cin  >> assign;

		//assign string to char
		rownum  = assign.at(0);
		colmlet = assign.at(1); 

	} while (assign.at(0) != 'q');
	return 0;
}

void seat_display()
{
	int row, colm;

	for (int row = 0; row < MAX_ROW; row++)
	{
		cout << row+1 << ". ";
		for (int colm = 0; colm < MAX_COLM; colm++)
		{
			cout << seats[row][colm] << " ";
		}
		cout << endl;
	}
}
