/*****************************************************
	Write a program that asks the user to enter two integers and then adds up all the integers between them (inclusive) and displays the total. 
	The user is allowed to enter the two values in either order - your program will need to figure out which is the lower bound and which is the higher bound.
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int number1, number2, total = 0, count = 1;

	cout << "Enter an integer: ";
	cin >> number1;

	cout << "Enter another integer: ";
	cin >> number2;

	if (number1 < number2)
	{
		for (number1 += 1; number1 < number2; number1++)
		{
			total += number1;
			count++;
			cout << number1 << endl;
		}

		cout << "The total of the numbers between " << number1-count << " and " << number2 << " is " << total << endl;
	}
	else
	{
		for (number2 += 1; number2 < number1; number2++)
		{
			total += number2;
			count++;
			cout << number2 << endl;
		}

		cout << "The total of the numbers between " << number2-count << " and " << number1 << " is " << total << endl;
	}
	
	return 0;
}