/*****************************************************
	Minimum/Maximum

	Write a program that ask the user to enter two numbers
	Use conditional operator to determine which number is smaller and which is bigger
******************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int number, number2;

	cout << "Enter two numbers: ";
	cin >> number >> number2;

	// If you use the conditional expression is good practice to put in parentheses
	cout << "The larger number is " << (number > number2 ? number : number2) << endl;


	return 0;
}