/*****************************************************
	The Speed of Sound

	The speed of sounds varies depending on the medium it travels
	The table below shows the different speeds

	Air = 1,100 feet per second
	Water = 4,900 feet per second
	Steel = 16,400 feet per second

	Write a program that displays a menu allowing the user to select air, water, or steel.
	After the user made a selection, ask the user for the number of feet sound will travel
	Display the amount of time it will take

	Input validation, control how the program should handle illegal input for the menu and any negative values.
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double	air = 1100,
					water = 4900,
					steel = 16400;

	int choice;
	double feet, time;

	cout << " Please select what medium you want to test the speed of sound:" << endl << endl;
	cout << setw(3) << " " << "1. Air" << endl;
	cout << setw(3) << " " << "2. Water" << endl;
	cout << setw(3) << " " << "3. Steel" << endl;
	cin >> choice;

	cout << "How far will the distance be in feet ";
	cin >> feet;


	// Speed formula is Speed = Distance/Time
	cout << fixed << setprecision(4);

	switch (choice)
	{
		case 1:
			time = feet / air;
			cout << "Your time  in air is " << time << endl;
			break;
		case 2:
			time = feet / water;
			cout << "Your time in water is " << time << endl;
			break;
		case 3:
			time = feet / steel;
			cout << "Your time in steel is " << time << endl;
			break;
		default:
			cout << "Please enter an option from the menu" << endl;
	}

	return 0;
}