/*****************************************************
	Ocean Levels

	Assuming the level of the Earth’s oceans continues rising at about 3.1 millimeters per year,
	write a program that displays a table showing the total number of millimeters the oceans
	will have risen each year for the next 25 years.
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double level = 3.1;

	for (int year = 1; year <= 25; year++)
	{

		cout << "In year " << year << " ocean level will rise " << fixed << setprecision(2) << level * year << endl;
	}


	return 0;
}