/*****************************************************
	Speed Conversion Chart

	Write a program that displays a table of speeds in kilometers per hour with their values converted to miles per hour.
	The table should display the speeds from 40 kilometers per hour through 120 kilometers per hour in increments of 5 kilometers
	per hour. (In other words, it should display 40 kph, 45 kph, 50 kph and so forth, up
	through 120 kph.)
	MPH = KPH * 0.6214
******************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double kilometer, mile;
	string line;

	cout << endl << "Kilometers" << setw(10) << "" << "Miles" << endl;
	cout << line.assign(30, '-') << endl;
	cout << fixed << setprecision(4);

	for (kilometer = 40.0; kilometer <= 120; kilometer += 5)
	{
		mile = kilometer * 0.6214;

		cout << kilometer << setw(15) << "" << mile << endl;
	}

	return 0;
}