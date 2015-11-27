/*****************************************************
	Arrowhead  Display

	Write a program that uses nested loops to display the arrowhead pattern shown below.

			+
			+++
			+++++
	+++++++++++++++
			+++++
			+++
			+
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	for (int x = 1; x <= 5; x++)
	{
		if (x % 2 == 0)
		{
			continue;
		}


		for (int y = 1; y <= 6; y++)
		{
			cout << " ";
		}


		for (int b = 1; b <= x; b++)
		{
			cout << "+";
		}
		
		cout << endl;
	}



	int counter = 1;
	while (counter == 1)
	{
		for (int z = 1; z <= 13; z++)
		{
			cout << "+";
		}
		cout << endl;
		counter--;
	}
	


	for (int x = 5; x >= 1; x--)
	{
		if (x % 2 == 0)
		{
			continue;
		}


		for (int y = 1; y <= 6; y++)
		{
			cout << " ";
		}


		for (int b = 1; b <= x; b++)
		{
			cout << "+";
		}

		cout << endl;
	}


	return 0;
}