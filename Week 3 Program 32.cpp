/*****************************************************
	Distance Travel

	Distance can be calculated distance = speed * time
	Write a program that ask the user for the speed of a vehicle and the hours it traveled
	It should then use a loop to display the total distance traveled at the end of each hour
	Example:

	What is the speed of the vehicle in mph? 40
	How many hours has it traveled? 3
	Hour	Miles Traveled
	--------------------------------
	1		40
	2		80
	3		120
******************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int speed, hour, distance;
	string line;

	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;

	cout << "How many hours has it traveled? ";
	cin >> hour;

	cout << endl << endl << "Hour" << setw(5) << "" << "Miles Traveled" << endl;
	cout << line.assign(25, '-') << endl;


	for (int x = 1; x <= hour; x++)
	{
		distance = speed * x;
		cout << setw(3) << "" << x << setw(10) << "" << distance << endl;
	}

	return 0;
}