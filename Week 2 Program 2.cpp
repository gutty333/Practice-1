// Sales Prediction
// A company generates only 62% percent of sales
// The company makes annually 4.6 million
// Find what the company will make and display the total

#include <iostream>
using namespace std;

int main()
{



	double percent = 0.62;
	int sales = 4600000;
	double income = percent * sales;

	cout << "Your company income is " << income << endl;

	return 0;
}