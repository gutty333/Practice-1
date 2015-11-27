/***********************************************
Write a program that asks the user for an upper bound and a lower bound (both integers). 
Your program should then generate 5 random numbers that are between those upper and lower bounds (inclusive). 
For instance, if the user enters a lower bound of -3 and an upper bound of 12, the output might be as follows: 
12 , 8 , 10 , -1 , 8
**************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int upperBound, lowerBound, number1, number2, number3, number4, number5;

	// Random seed to get different results each time we run the program
	int seed = time(0);
	srand(seed);


	// Asking for user input on the lower bound and upper bound number
	cout << "Please enter an upper bound number: ";
	cin >> upperBound;
	cout << "Please enter a lower bound number: ";
	cin >>	lowerBound;


	// Assigning the random number to get 5 results
	number1 = rand() % (upperBound - lowerBound + 1) + lowerBound;
	number2 = rand() % (upperBound - lowerBound + 1) + lowerBound;
	number3 = rand() % (upperBound - lowerBound + 1) + lowerBound;
	number4 = rand() % (upperBound - lowerBound + 1) + lowerBound;
	number5 = rand() % (upperBound - lowerBound + 1) + lowerBound;


	// Displaying the random numbers
	cout << number1 << endl;
	cout << number2 << endl;
	cout << number3 << endl;
	cout << number4 << endl;
	cout << number5 << endl;

	return 0;
}