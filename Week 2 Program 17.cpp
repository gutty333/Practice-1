// Chapter 3
// Write a program that converts Celsius temperatures to Fahrenheit temperatures.
// The formula is F = (9/5 * C) +32


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
	double celsius, fahrenheit;

	cout << endl << "Hello, enter your temperature in Celsius: ";
	cin >> celsius;

	fahrenheit = (9.0 / 5 * celsius) + 32;

	cout << endl << "You temperature in Fahrenheit is: "  << fahrenheit << endl << endl;


	return 0;
}