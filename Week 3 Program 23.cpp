/*****************************************************
	Write a nested loop that displays 10 rows of # characters
	There should be 15 # characters in each row
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	for (int x = 1; x <= 10; x++)
	{
		cout << x << " ";
		for (int y = 1; y <= 15; y++)
		{
			cout << "#";
		}
		cout << endl;
	}

	return 0;
}