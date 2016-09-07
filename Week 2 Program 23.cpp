/***********************************************
	Batting Average

	Ask the user to enter the number of times he went to bat
	Also ask for the number of hits they got
	Display the average up to 4 decimal points
**************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int bats, hits;
	double average;

	cout << "How many times did you bat? ";
	cin >> bats;

	cout << "How many times did you hit the ball? ";
	cin >> hits;

	average = static_cast<double>(hits) / bats;

	cout << "Your batting average is " << fixed << setprecision(4) << average << endl;

	return 0;
}