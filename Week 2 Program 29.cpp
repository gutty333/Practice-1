/***********************************************
	Monthly Sales Tax

	Write a program that ask for the month, the year
	Also the total amount collected at the cash register(include sale plus tax)
	Assume the sales state tax is 4 percent and county is 2 percent
	You can calculate the product sales with this formula
	Sales = total income / 1.06

	The program should display something like this
	Month: March 2008
	----------------------
	Total Collected:		$ 26572.89
	Sales:					$ 25068.76
	Country Sales Tax:		$ 501.38
	State Sales Tax:		$ 1002.75
	Total Sales Tax:		$ 1504.13
**************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string month, lineBreak;
	int year;
	double totalCollected, sales, stateSale, countySale, totalTax;

	cout << "Enter the month you want to file for your monthly sales tax: ";
	cin >> month;

	cout << "Enter the year you are going to file for: ";
	cin >> year;

	cout << "Enter the total amount of income collected: ";
	cin >> totalCollected;

	stateSale = totalCollected * .04;
	countySale = totalCollected * .02;
	totalTax = countySale + stateSale;
	sales = totalCollected - totalTax;

	cout << "Month: " << month << " " << year << endl;
	cout << lineBreak.assign(25, '-') << endl;
	cout << left << setw(30) << "Total Collect:" << fixed << setprecision(2) << "$" << right << setw(10) << totalCollected << endl;
	cout << left << setw(30) << "Sales:" << "$" << right << setw(10) << sales << endl;
	cout << left << setw(30) << "County Sales Tax:" << "$" << right << setw(10) << countySale << endl;
	cout << left << setw(30) << "State Sales Tax:" << "$" << right << setw(10) << stateSale << endl;
	cout << left << setw(30) << "Total Sales Tax:" << "$" << right << setw(10) << totalTax << endl;

	return 0;
	// Program could use better arithmetic, but overall it covers all the steps
}