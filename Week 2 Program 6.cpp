// Miles per Gallon
// A car hold 16 gallons and can travel 350 miles
// Write a program that calculate the number of miles per gallon the car gets and display the result

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int gallons = 16, miles = 350;

	cout << "This car will travel " << miles/gallons << " miles per gallon." << endl;

	return 0;
}