/*****************************************************
	Population

	Write a program that will predict the size of a population of organisms. 
	The program should ask the user for the starting number of organisms.
	Their average daily population increase (as a percentage of current population)
	And the number of days they will multiply.
	A loop should display the size of the population for each day.
	
	
	Input Validation: The program should not accept a number less than two for the
	starting size of the population, a negative number for average daily population
	increase, or a number less than one for the number of days they will multiply.
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int startingNumber, days, population;
	double increase;


	cout << "What is the starting number of organisms? Enter a value higher than 2: ";
	cin >> startingNumber;

	cout << "What is the average daily population increase: ";
	cin >> increase;

	cout << "For how many days will the organisms multiply? ";
	cin >> days;


	// This could be done better with the do while loop
	// Just using the while loop instead for this program
	while (startingNumber < 2)
	{
		cout << "Please enter a value large than 2 for the starting population: ";
		cin >> startingNumber;
	}
	while (increase < 0)
	{
		cout << "Please enter a positive percent value: ";
		cin >> increase;
	}
	while (days < 1)
	{
		cout << "Please enter more than 1 day as your value of days: ";
		cin >> days;
	}

	population = startingNumber;

	for (int x = 1; x <= days; x++)
	{
		population = ((increase / 100) * population) + population;
		cout << endl << "For day " << x << " the population will be " << population << endl;
	}

	return 0;
}