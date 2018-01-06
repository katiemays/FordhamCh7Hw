// Katie Mays
// Dec 1, 2017
// HW9: letter occurrences

#include <iostream>
using namespace std;
 
int main()
{
	// variables
	char letter;
	int occurrences[26] = {0}, index=0; /*initialize entire integer array by initializing one by {0}*/
	string phrase;

	// input
	cout << "Enter phrase: ";
	getline(cin, phrase);

	// processing
	int len = phrase.length();

	for (int i = 0; i < len; i++)
	{
		letter = phrase.at(i);
		
		if (letter >= 'a' && letter <= 'z')
		{
			index = letter - 'a';
			occurrences[index]++;
		}
	}
	// output
	cout << "Letter\t\tOccurrences" << endl;
	cout << "~~~~~~\t\t~~~~~~~~~~~" << endl;

	for(int i=0; i < 26; i++)
	{
		if (occurrences[i] > 0)
		{
			cout << char('a'+i) << "\t\t" << occurrences[i] << endl;
		}
	}	
	
	return 0;
}


