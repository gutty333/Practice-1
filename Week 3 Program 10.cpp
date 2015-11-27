/*****************************************************
	Bank Charges

	A bank charges 10 per month plus the following check fees

	$.10 each for fewer than 20 checks
	$.08 each for 20-39 checks
	$.06 each for 24-59 checks
	$.04 each for 60 or more checks

	Write a program that ask for the number of checks
	After display the bank's fee for that month
******************************************************/
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double	charge = 10.0,
					price1 = .10,
					price2 = .08,
					price3 = .06,
					price4 = .04;

	int checks;

	cout << "How many checks did you write? ";
	cin >> checks;

	cout << fixed << setprecision(2);

	if (checks > 20)
	{
		cout << "Your total is $" << (checks * price1) + charge << endl;
	}
	else if (checks >= 20 && checks <= 39)
	{
		cout << "Your total is $" << (checks * price2) + charge << endl;
	}
	else if (checks >= 40 && checks <= 59)
	{
		cout << "Your total is $" << (checks * price3) + charge << endl;
	}
	else
	{
		cout << "Your total is $" << (checks * price4) + charge << endl;
	}

	return 0;
}