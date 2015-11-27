/*****************************************************
	Pennies for Pay

	Write a program that calculates how much a person earns in a month if the salary is one
	penny the first day, two pennies the second day, four pennies the third day, and so on
	with the daily pay doubling each day the employee works. 1, 2 , 4 , 8, 16
	The program should ask the user for the number of days the employee worked during the month, validate that it is
	between 1 and 31, and then display a table showing how much the salary was for each
	day worked, as well as the total pay earned for the month. 
	The output should be displayed in dollars with two decimal points, not in pennies.
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int days;
	double month = 0, penny = 0.01;

	do
	{
		cout << "For how many days in the month do you plan on working(1-31)? ";
		cin >> days;
	} while (days > 31);
	
	for (int work = 1; work <= days; work++)
	{
		
		cout << "For day " << work << " you made $" << fixed << setprecision(2) << penny << endl;
		penny *= 2;
		month += penny;
	}

	cout << endl << "The total you made this month is $" << month << endl;

	return 0;
}