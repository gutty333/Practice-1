/*****************************************************
	Time Calculator

	Write a program that ask the user to enter a number of seconds
	There are 86400 seconds in a day
	If the number of seconds entered by the user is greater than or equal display how many days are there entered in seconds
	There are 3600 seconds in an hour
	If the number is less than 86400 but greater than or equal to 3600, display the number of hours
	There are 60 seconds in a minute
	If the number entered is less than 3600 but greater than or equal to 60, display the number of minutes
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	const int minute = 60, hour = 3600, day = 86400;
	int seconds;

	cout << "Enter the number of seconds ";
	cin >> seconds;


	if (seconds >= day)
	{
		cout << "Your total day/days is " << seconds / day << endl;
	}
	else if (seconds >= hour)
	{
		cout << "Your total hour/hours is " << seconds / hour << endl;
	}
	else if (seconds >= minute)
	{
		cout << "Your total minute/minutes is " << seconds / minute << endl;
	}


	return 0;
}