/*****************************************************
	Book Club Points

	A book club awards points based on the number of books purchased each month

	0 = 0
	1 = 5
	2 = 15
	3 = 30
	4 or more = 60

	Write a program that ask the user for the number of books purchased
	After display the amount of points they earned
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "How many books did you purchase this month? ";
	cin >> number;

	switch (number)
	{
		case 0: cout << "You earned 0 points" << endl;
		break;

		case 1: cout << "You earned 5 points" << endl;
		break;

		case 2: cout << "You earned 15 points" << endl;
		break;

		case 3: cout << "You earned 30 points" << endl;
		break;

		default: cout << "You earned 60 points" << endl;
	}

	return 0;

}