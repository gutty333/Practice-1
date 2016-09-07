// Write a program that ask to enter the number of candy bars sold and the amount each candy is worth
// It should calculate and display the total amount

#include <iostream>
using namespace std;

int main()
{
	int candyBar, amount;

	cout << "How many candies did you sell today? ";
	cin >> candyBar;

	cout << "How much are each candy bar worth? ";
	cin >> amount;

	int total = candyBar * amount;

	cout << "Today you made a total of $" << total << endl;

	return 0;
}