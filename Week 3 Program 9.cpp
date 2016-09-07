/*****************************************************
	Software Sales

	A company sells package that retails for $99

	Quantity discount are given below

	10-19 = 20%
	20-49 = 30%
	50-99 = 40%
	100 or more = 50%

	Write a program that ask for the number of units purchased
	Display the total cost
	Validate how the program will handle an input less than 0
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double	discount1 = .2,
					discount2 = .3,
					discount3 = .4,
					discount4 = .5,
					price = 99.0;

	int unitNumber;
	double total;

	cout << "How many units are you buying? ";
	cin >> unitNumber;
	total = unitNumber * price;
	cout << fixed << setprecision(2);

	if (unitNumber < 0)
	{
		cout << "Please enter a positive integer" << endl;
	}
	else if (unitNumber < 10)
	{
		cout << "The total is $" << unitNumber * price << endl;
	}
	else if (unitNumber >= 10 && unitNumber <= 19)
	{
		cout << "The total is $" << total - (total * discount1) << " including the discount of 20%" << endl;
	}
	else if (unitNumber >= 20 && unitNumber <= 49)
	{
		cout << "The total is $" << total - (total * discount2) << " including the discount of 30%" << endl;
	}
	else if (unitNumber >= 50 && unitNumber <= 99)
	{
		cout << "The total is $" << total - (total * discount3) << " including the discount of 40%" << endl;
	}
	else
	{
		cout << "The total is $" << total - (total * discount4) << " including the discount of 50%" << endl;
	}

	return 0;

}