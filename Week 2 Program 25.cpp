/***********************************************
	Average Rainfall

	Program that calculates the average monthly rainfall for 3 months
	Ask the user to enter the name of the 3 months
	Also the amount of rain that fell in that month
	Display a message similar to this:
	"The average monthly rainfall for June, July, and August was 6.72 inches.
**************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const int month = 3;

	string month1, month2, month3;
	double rain1, rain2, rain3, average;

	cout << "Please select three months that rain the most during the year ";
	cin >> month1 >> month2 >> month3;

	cout << "How much rain fell in the month of " << month1 << "? ";
	cin >> rain1;

	cout << "How much rain fell in the month of " << month2 << "? ";
	cin >> rain2;

	cout << "How much rain fell in the month of " << month3 << "? ";
	cin >> rain3;


	average = (rain1 + rain2 + rain3) / static_cast<double>(month);
	cout << "The average monthly rainfall for " << month1 << ", " << month2 << ", and " << month3 << " was " << fixed << setprecision(2) << average << " inches." << endl;

	return 0;
}