/*****************************************************
	Rate of Inflation
	
	The annual rate of inflation is the rate at which money loses its value. 
	For example, if the annual rate of inflation is 3.0%, then in one year it will cost $1030 to buy the goods that could have been purchased for $1000 today. 
	Put another way, a year from now $1000 will only buy 1/1.03 * $1000, or $970.87, worth of goods. 
	Two years from now $1000 will only buy only 1/1.03 of $970.87, or $942.59 worth of goods. 
	Write a program that allows the user to enter an annual rate of inflation between 1% and 15%, and which then reports how much $1000 today will be worth each year for the next 10 years.
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double rate, price = 1000;

	do
	{
		cout << "What will the inflation rate be, choose between 1% and 15%? ";
		cin >> rate;
	} while (rate < 1 || rate > 15);

	rate = (rate/100.0) +1.0;

	for (int x = 1; x <= 10; x++)
	{
		price = (1/rate) * price;

		cout << endl << "In year " << x << " $1000 will be worth $" << fixed << setprecision(2) << price << " with an inflation rate of " << setprecision(0) << (rate - 1) * 100 << " percent" << endl;
	}

	return 0;
	
}
