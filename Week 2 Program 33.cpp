/***********************************************
	Angle Calculator

	Write a program that ask for an angle
	The program should then display the sine, cosine, and tangent
	Display the values rounded up to 4 decimal points
**************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double angle;

	cout << "What is the angle ";
	cin >> angle;

	cout << "The sine is: " << fixed << setprecision(4) << sin(angle) << endl;
	cout << "The cosine is: " << tan(angle) << endl;
	cout << "The tangent is: " <<  cos(angle) << endl;


	return 0;
}