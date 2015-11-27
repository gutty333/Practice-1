/*****************************************************
	Chapter 5 Loops

	Write a do while loop that ask the user to enter two numbers
	The numbers should be added and the sum displayed
	The user should be asked if he or she wishes to perform the operation again
	If so the loop should repeat; otherwise it should terminate
******************************************************/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int number1, number2, total;
	char choice;

	do
	{
		cout << "Enter number 1: ";
		cin >> number1;

		cout << "Enter number 2: ";
		cin >> number2;

		total = number1 + number2;
		cout << number1 << " + " << number2 << " = " << total << endl;

		cout << "Do you want to continue?(Y or N)" << endl;
		cin >> choice;

	} while (toupper(choice) == 'Y');


	return 0;
}