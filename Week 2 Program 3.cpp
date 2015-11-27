// Sales Tax
// Total sales of 52 dollar purchase
// The state tax is 4 percent
// The county tax is 2 percent
// Display the original price, than the state tax, county tax, and total tax of that price

#include <iostream>
using namespace std;

int main()
{
	int price = 52;

	double stateTax = .04;
	double countyTax = .02;
	double stateTotal, countyTotal, total;


	stateTotal = price * stateTax;
	countyTotal = price * countyTax;
	total = stateTotal + countyTotal;

	cout << "Original price is $" << price - total << endl;
	cout << "New price with state tax of 4 percent is $" << price - stateTotal << endl;
	cout << "New price with county tax of 2 percent is $" << price - countyTotal << endl;
	cout << "New price with both tax applied is $" << price << endl;


	return 0;
}