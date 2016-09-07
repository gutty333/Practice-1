/***********************************************
	Box office

	A theater only keeps a percentage of revenue from ticket sales, the rest goes to the distributor
	Write a program that finds the profit of the theater
	1. Ask the user for the name of the movie
	2. How many adult and child tickets were sold
	3. An adult is $6 and a child ticket is $3
	4. Display a report similar to this
	Movie Name:				"Wheels of Fury"
	Adult Tickets Sold:		382
	Child Tickets Sold:		127
	Gross Box Office:		$2673.00
	Amount Paid:			$2138.00
	Net Box Office:			$534.60
	5. Assume that the theater only keeps 20 percent of the total profit

	Important!!!!!
**************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const double adultPrice = 6, childPrice = 3, percent = .2;
	
	string movie;
	int adultTicket, childTicket;
	double adultTotal, childTotal, total, theater, distributor;

	cout << "What is the name of the movie? ";
	getline(cin, movie);

	cout << "How many adult tickets were sold? ";
	cin >> adultTicket;

	cout << "How many child tickets were sold? ";
	cin >> childTicket;

	adultTotal = adultTicket * adultPrice;
	childTotal = childTicket*childPrice;

	total = adultTotal + childTotal;

	theater = total * percent;

	distributor = total - theater;

	// reminder that setw is not how many spaces you want to set
	// Rather setw is how long a value will be, if the value is less than the setw than it will convert to space
	// For example setw(5) << 22 = "   22"
	// It turns into 3 spaces and the value of 22
	// This is similar to padding

	// Also note that by default things will print right align
	// If you change the alignments, sometimes you need to reverse it back to align right
	cout << left << setw(35) << "Movie Name:" << "\"" << movie << "\"" << endl;
	cout << left << setw(35) << "Adult Tickets Sold:" << adultTicket << endl;
	cout << left << setw(35) << "Child Tickets Sold:" << childTicket << endl;
	cout << left << setw(35) << "Gross Box Office Profit:" << fixed << setprecision(2) << "$" << right << setw(10) << total << endl;
	cout << left << setw(33) << "Gross Box Office Profit:" << "- " << "$" << right << setw(10) << distributor << endl;
	cout << left << setw(35) << "Net Box Office Profit:" << "$" << right << setw(10) << theater << endl;


	return 0;


}