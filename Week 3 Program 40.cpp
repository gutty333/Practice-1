/*****************************************************
The Greatest and Least of These

Write a program with a loop that lets the user enter a series of integers, followed by -99 to
signal the end of the series. After all the numbers have been entered, the program should
display the largest and smallest numbers entered.
******************************************************/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int number, greater = INT_MIN, least = INT_MAX;

	do
	{
		cout << "Enter a series of integers, to end enter -99 ";
		cin >> number;

		if (number != -99)
		{
			if (number > greater)
			{
				greater = number;
			}

			if (number < least)
			{
				least = number;
			}
		}

	} while (number != -99);


	cout << endl << "The largest number you entered is " << greater << endl;
	cout << "The smallest number you entered is " << least << endl;


	return 0;
}