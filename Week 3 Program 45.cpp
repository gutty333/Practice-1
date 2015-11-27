/*****************************************************
	Hotel Suites Occupancy

	Write a program that calculates the occupancy rate of the 120 suites (20 per floor) located on the top 6 floors of a 15-story luxury hotel. 
	These are floors 10–12 and 14–16 because, like many hotels, there is no 13th floor. 
	Solve the problem by using a single loop that loops once for each floor between 10 and 16 and, on each iteration, asks the user to input the number of suites occupied on that floor. 
	Use a nested loop to validate that the value entered is between 0 and 20. 
	After all the iterations, the program should display how many suites the hotel has, how many of them are occupied, and what percentage of them are occupied.
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	const int total = 120;
	int suite, occupied = 0;
	double percentage;

	for (int x = 10; x <= 16; x++)
	{
		if (x == 13)
		{
			continue;
		}

		cout << "What is the number of suits on floor " << x << "? ";
		cin >> suite;

		occupied += suite;

		

		while (suite < 10 || suite > 20)
		{
			cout << "Please enter a number between 10 - 20 for the number of suites: ";
			cin >> suite;
		}
	}

	percentage = static_cast<double>(occupied) / total;
	cout << endl << "The hotel has a total of " << total << " suites, but only " << occupied << " are occupied, which is about " << static_cast<int>(percentage * 100) << " percent" << endl;

	return 0;
}