/*****************************************************
	Roman Numeral Converter

	Write a program that ask the user to enter a number
	The number must be within the range of 1 through 10
	Use  switch statement to display the Roman numeral of that number
	Decide how the program will handle an input that is outside of the range
******************************************************/

#include <iostream>
using namespace std;

int main()
{

	int number;

	cout << "Enter a number from 1 to 10: ";
	cin >> number;

	switch (number)
	{
		case 1: cout << number << " = I" << endl;
		break;

		case 2: cout << number << " = II" << endl;
		break;

		case 3: cout << number << " = III" << endl;
		break;

		case 4: cout << number << " = IV" << endl;
		break;

		case 5: cout << number << " = V" << endl;
		break;

		case 6: cout << number << " = VI" << endl;
		break;

		case 7: cout << number << " = VII" << endl;
		break;

		case 8: cout << number << " = VIII" << endl;
		break;

		case 9: cout << number << " = IX" << endl;
		break;

		case 10: cout << number << " = X" << endl;
		break;

		default: cout << "Please enter a number from 1 to 10" << endl;
	}

	return 0;
}