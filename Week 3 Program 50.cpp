/*****************************************************
	Write a program with a loop that asks the user how many numbers they would like to enter. 
	The program will then let the user enter that many values (you can assume they are doubles). 
	After all the numbers have been entered, the program should display the largest and smallest of those numbers.
******************************************************/
#include <iostream>
using namespace std;


// Another method to approach this problem is with the <climit> header file and using the max double and least double
int main()
{
	int number;
	double values, large = 0, least = 1000*1000;


	cout << "How many numbers do you want to enter: ";
	cin >> number;

	for (int x = 1; x <= number; x++)
	{
		cout << x << " Enter your value: ";
		cin >> values;

		if (values > large)
		{
			large = values;
		}

		if (values < least)
		{
			least = values;
		}
	}

	cout << "The largest value is " << large << endl;
	cout << "The least value is " << least << endl;

	return 0;
}