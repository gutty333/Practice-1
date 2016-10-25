// Future Ocean Levels
// Ocean is rising approximately 3.1 million millimeters per year
// Write a program that calculates how much they will rise if this rate continues
// Display the answer in centimeters and inches

#include <iostream>
using namespace std;

int main()
{
	int increase = 3100000 * 20;
	double centimeters, inches;



	centimeters = increase * .1;
	inches = centimeters * .393701;

	cout << "The increase in centimeters is " << centimeters << endl;
	cout << "The increase in inches is " << inches << endl;

	return 0;
}