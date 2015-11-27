/*****************************************************
	Chapter 5 Loops

	Write a loop that asks the user to enter a number
	The loop should iterate 10 times and keep a running total of the numbers entered
******************************************************/
#include <iostream>
using namespace std;

int main()
{

	int number, total = 0;

	for (int counter=1; counter <= 10; counter++)
	{
		cout << counter << ". Enter a number ";
		cin >> number;
		total += number;
	}

	cout << "The total is " << total << endl;

	return 0;
}