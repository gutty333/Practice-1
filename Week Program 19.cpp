// Chapter 3
// Miles per Gallon
// Write a program that calculates car's gas mileage
// Ask the user for the number of gallons of gas and the miles it can drive
// After display how many miles it drives per gallon

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int gasGallon, miles;
	double gallon;

	cout << "How much gallons of gas does your car have? ";
	cin >> gasGallon;

	cout << "How many miles does your car travel? ";
	cin >> miles;

	gallon = static_cast<double>(miles) / gasGallon;


	cout << "The miles per gallon your car travel is " << fixed << setprecision(2) <<gallon << endl;

	return 0;
}