#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;


int main()
{
	// Simple Condition
	int score1, score2, score3;
	double average;
	cout << "Enter three test scores ";
	cin >> score1 >> score2 >> score3;
	// Instead of this average = (score1 + score2 + score3) / static_cast<double>(3);
	// Write 3.0 instead of using data type conversion(static cast) it is much better
	average = (score1 + score2 + score3) / 3.0;
	if (average == 100)
	{
		cout << "Congrats you got a perfect score" << endl;
	}
	else
	{
		cout << "You did not get a perfect score" << endl;
	}

	// Here is an example of a null statement in which the condition has a semi colon at the end
	// The statements will execute no matter what if you make this error
	if (average == 90)
	{
		cout << "Do not use semi colons after the if statement condition" << endl;
	}

	// Understanding the true and false when dealing with conditions
	int x = 3;
	// Here since x is 3 this is the same as true
	// True is any value not equal to zero
	if (x)
	{
		cout << "Amazing stuff" << endl;
	}
	/* This is similar to writing
	if (x == true)
	{
		cout << "Wow this is getting better" << endl;
	}
	*/




	// If and Else statements
	int number;
	cout << endl << endl << "Enter a positive number ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "Your number is even" << endl;
	}
	else
	{
		cout << "Your number is odd" << endl;
	}



	// Blocks and Variable Scopes
	int number2;
	cout << endl << endl << "Enter a number ";
	cin >> number2;
	if (number2)
	{
		int number2;
		cout << "Enter another number here ";
		cin >> number2;
		cout << "Your number in the inside the block is " << number2 << endl;
	}
	cout << "Your number in the global scope is " << number2 << endl;

	return 0;
}