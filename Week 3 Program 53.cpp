/*****************************************************
	Triangle  Display

	Write a program that uses nested loops to display the triangle pattern shown below.
	+
	+++
	+++++
	+++++++
	+++++
	+++
	+
******************************************************/
#include <iostream>
using namespace std;


int main()
{
	for (int x = 1; x <= 7; x++)
	{
		if (x % 2 == 0)
		{
			continue;
		}

		for (int y = 1; y <= x; y++)
		{
			cout << "+";
		}

		cout << endl;
	}

	for (int x = 5; x >= 1; x--)
	{
		if (x % 2 == 0)
		{
			continue;
		}

		for (int y = 1; y <= x; y++)
		{
			cout << "+";
		}

		cout << endl;
	}




	return 0;
}

