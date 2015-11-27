/*****************************************************
	Calories Burned

	Running on a particular treadmill you burn 3.9 calories per minute. Write a program
	that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30
	minutes.
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	const double calories = 3.9;

	for (int minute = 10; minute <= 30; minute += 5)
	{
		cout << "You burned " << fixed << setprecision(2) << minute * calories << " calories in " << minute << " minutes" << endl;
	}

	return 0;
}