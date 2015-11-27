/*****************************************************
	Celsius to Fahrenheit Table

	In one of the Chapter 3 Programming Challenges you were asked to write a program
	that converts a Celsius temperature to Fahrenheit. Modify that program so it uses a
	loop to display a table of the Celsius temperatures from 0 to 20 and their Fahrenheit
	equivalents.
	F = 9/5C + 32
******************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double f;
	string line;

	cout << endl << "Celsius" << setw(10) << "" << "Fahrenheit" << endl;
	cout << line.assign(30, '-') << endl;


	for (int c = 1; c <= 20; c++)
	{
		f = (9.0 / 5)*c + 32;
		cout << c << setw(20) << "" << fixed << setprecision(1) << f << endl;
	}

	return 0;
}