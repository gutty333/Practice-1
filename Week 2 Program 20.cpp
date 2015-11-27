/***********************************************
	Stadium Seating

	There are  3 seating categories
	1. Softball games Class A seats cost $15
	2. Class B seats cost $12
	3. Class C seats cost $9
	Write a program that ask how many tickets were sold for each class seat.
	Then display the total amount generated from all sales
	Format the amount to only 2 decimal points
**************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	const double classA = 15, classB = 12, classC = 9;
	int ticketA, ticketB, ticketC;
	double total;

	cout << "How many tickets were sold for class A seats? ";
	cin >> ticketA;

	cout << "How many tickets were sold for class B seats? ";
	cin >> ticketB;

	cout << "How many tickets were sold for class C seats? ";
	cin >> ticketC;

	total = (classA * ticketA) + (classB * ticketB) + (classC * ticketC);

	cout << "The total amount of money generated for all ticket sells is $" << fixed << setprecision(2) << total << endl;


	return 0;
}