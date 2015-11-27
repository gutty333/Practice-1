/*****************************************************
	Sum of Numbers

	Write a program that ask the user for a positive integer
	Use a loop to validate the input (make sure they enter a positive integer)
	The program should use another loop to find the sum of all numbers up to the number entered
	For example if they enter 50, find the sum of 1+2+3+4+5+6+7+8........50
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int number, total = 0;

	do
	{
		cout << "Please enter a positive number ";
		cin >> number;
	} while (number < 0);

	for (int x = 1; x <= number; x++)
	{
		total += x;
	}
	cout << "The total sum is " << total << endl;




	return 0;
}