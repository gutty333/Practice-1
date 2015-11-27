/*****************************************************
	Diamond Display

	Write a program that uses nested loops to display the diamond pattern shown below.
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

	for (int i = 1; i<=7; i++)
	{
		// This allows for only old numbers to display
		if (i % 2 == 0)
		{
			continue;
		}

		// This controls the spacing for the top
		for (int j = 6; j >= i; j--)
		{
			if (j % 2 == 0)
			{
				continue;
			}
			cout << " ";
		}
			
		// This controls the top part of the diamond
		for (int k = 1; k <= i; k++)
		{
			cout << "+";
		}
		cout << endl;
	}


	for (int i = 5; i >= 1; i--)
	{
		if (i % 2 == 0)
		{
			continue;
		}

		// This controls the spacing for the bottom
		for (int j = 5; j >= i; j--)
		{
			if (j % 2 == 0)
			{
				continue;
			}
			cout << " ";
		}

		// This controls the bottom part of the diamond
		for (int k = 1; k <= i; k++)
		{
			cout << "+";
		}
		cout << endl;
	}

	return 0;
}