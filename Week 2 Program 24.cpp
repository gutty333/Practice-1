/***********************************************
	Test Average

	Ask the user for five test scores
	The program should calculate the average
	Display the result with only 1 decimal place
**************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	const int totalTest = 5;

	int test1, test2, test3, test4, test5;
	double average;

	cout << "Enter the test scores for the 5 test you took: ";
	cin >> test1 >> test2 >> test3 >> test4 >> test5;

	average = (test1 + test2 + test3 + test4 + test5) / static_cast<double>(totalTest);

	cout << "Your test average is " << fixed << setprecision(1) << average << endl;

	return 0;
}