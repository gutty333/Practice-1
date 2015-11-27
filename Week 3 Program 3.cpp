/*****************************************************
	Magic Dates

	The date June 10, 1960 is special because when written as 6/10/60. The month time the date equals the year

	Write a program that ask the user to enter a month in number, a day and a two digit year.
	If the month time the day equals the year the program should tell the user the date is magic
	If not the program should say the date is not magic
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int month, day, year;

	cout << "Enter a month, a date, and a two digit year: ";
	cin >> month >> day >> year;

	if (month*day == year)
	{
		cout << "Your date is magical" << endl;
	}
	else
	{
		cout << "Your date is not magical" << endl;
	}

	return 0;
}