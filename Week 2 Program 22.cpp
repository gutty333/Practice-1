/***********************************************
	How Much Insurance?

	People are advised to insure their home for at least 80 percent of the amount it would cost to replace the structure
	Ask the user to enter the replacement cost
	After display the minimum amount of insurance that should be purchased
**************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	const double percent = .80;

	double replacementCost, total;

	cout << "What will the replacement cost be for the property? ";
	cin >> replacementCost;

	total = replacementCost * percent;

	cout << "The minimum amount of insurance that should be purchased is " << fixed << setprecision(2) << total << endl;

	return 0;
}