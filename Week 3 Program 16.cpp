/*****************************************************
	Internet Service Provider Part 1

	A phone company has three different subscription packages

	
	Package A: For $9.95  per month  5 hours  of call time are provided. 
	Additional usage costs 
	$0.08  per minute.

	Package B: For $14.95 per month  10 hours  of call time are provided. 
	Additional usage costs 
	$0.06  per minute.

	Package C: For $19.95 per month  unlimited  call time is provided.

	Write a program that calculates a customer's monthly bill
	It should display customer name, which package they have, how many hours used
	It should create a bill that includes input information and the total amount due
	Input Validation, check that the user only select from A, B, or C


	Internet Service Provider Part 2

	Modify the program so that it displays how much money Package A customer would save if they purchase Package B or C.
	Do the same for customers of Package B and Package C.
	If there are no savings, no message should be printed
******************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const double	month1 = 9.95,
					month2 = 14.95,
					month3 = 19.95,
					hour1 = 5,
					hour2 = 10,
					minutePrice1 = .08,
					minutePrice2 = .06;

	string name;
	char choice;
	int hours, hours2;
	double minutes, total, packageA, packageB, packageC;
	packageA = packageB = packageC = false;

	cout << "Hello what is your name? ";
	getline(cin, name);

	// Customer Menu
	cout << endl << name << " please select a package below" << endl << endl;
	cout << setw(3) << "" << "Package A is $9.95 a month with a limit of 5 hours" << endl;
	cout << setw(3) << "" << "Package B is $14.95 a month with a limit of 10 hours" << endl;
	cout << setw(3) << "" << "Package C is $19.95 a month with unlimited  call time" << endl;
	cout << endl << "Choose from letters A - C" << endl;
	cin >> choice;
	cout << fixed << setprecision(2);

	switch (choice)
	{
		// Package A
		case 'a':
		case 'A':
			cout << "How many hours do you plan to use: ";
			cin >> hours;
			cout << name << " you have chosen Package A and your total hours used is " << hours << endl << endl;
			hours2 = hours;
			if (hours > hour1)
			{
				hours -= hour1;
				minutes = (hours * 60) * minutePrice1;
				cout << "You will be charged for over used hours/minutes a total of $" << minutes << endl << endl;
				total = minutes + month1;
				cout << name << " your monthly bill will be $" << total << endl;
			}
			else
			{
				total = month1;
				cout << name << " your monthly bill will be $" << total << endl;
			}
			packageA = true;
			break;

		// Package B
		case 'b':
		case 'B':
			cout << "How many hours do you plan to use: ";
			cin >> hours;
			cout << name << " you have chosen Package B and your total hours used is " << hours << endl << endl;
			hours2 = hours;
			if (hours > hour2)
			{
				hours -= hour2;
				minutes = (hours * 60) * minutePrice2;
				cout << "You will be charged for over used hours/minutes a total of $" << minutes << endl << endl;
				total = minutes + month2;
				cout << name << " your monthly bill will be $" << total << endl;
			}
			else
			{
				total = month2;
				cout << name << " your monthly bill will be $" << total << endl;
			}
			packageB = true;
			break;

		// Package C
		case 'c':
		case 'C':
			cout << "How many hours do you plan to use: ";
			cin >> hours;
			cout << name << " you have chosen Package C and your total hours used is " << hours << endl << endl;
		
			total = month3;
			cout << name << " your monthly bill will be $" << total << endl;
			packageC = true;
			break;


		default:
			cout << "Please choose one of the packages" << endl;
	}


	// Price Comparison, will display only if the customer can save money
	if (packageA)
	{
		packageC = month3;

		if (hours2 > hour2)
		{
			hours2 -= hour2;
			minutes = (hours2 * 60) * minutePrice2;
			packageB = minutes + month2;
		}
		else
		{
			packageB = month2;
		}

		if (total > packageB)
		{
			cout << "If you select Package B you can save $" << total - packageB << endl;
		}
		
		if (total > packageC)
		{
			cout << "If you select Package C you can save $" << total - packageC << endl;
		}
	}
	else if (packageB)
	{
		packageC = month3;

		if (hours2 > hour1)
		{
			hours2 -= hour1;
			minutes = (hours2 * 60) * minutePrice1;
			packageA = minutes + month1;
		}
		else
		{
			packageA = month1;
		}

		if (total > packageA)
		{
			cout << "If you select Package A you can save $" << total - packageA << endl;
		}

		if (total > packageC)
		{
			cout << "If you select Package C you can save $" << total - packageC << endl;
		}
	}
	else if (packageC)
	{
		int hours3 = hours2; // Needed to compare Package B in this block

		if (hours2 > hour1)
		{
			hours2 -= hour1;
			minutes = (hours2 * 60) * minutePrice1;
			packageA = minutes + month1;
		}
		else
		{
			packageA = month1;
		}

		if (hours3 > hour2)
		{
			hours3 -= hour2;
			minutes = (hours3 * 60) * minutePrice2;
			packageB = minutes + month2;
		}
		else
		{
			packageB = month2;
		}

		if (total > packageA)
		{
			cout << "If you select Package A you can save $" << total - packageA << endl;
		}

		if (total > packageB)
		{
			cout << "If you select Package B you can save $" << total - packageB << endl;
		}
	}


	return 0;
}