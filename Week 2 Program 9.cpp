// Circuit Board Price
// A company sell boards at a profit of 40 percent
// Write a program that calculates the selling price of a board that cost them $12.67
// Display the result

#include <iostream>
using namespace std;

int main()
{

	double tax = .40;
	double price = 12.67;
	double sellingPrice;

	sellingPrice = (price * tax) + price;

	cout << "Your initial price to make the board is $" << price << endl;
	cout << "Your selling price for selling the board after taxes/profit is $" << sellingPrice << endl;

	return 0;


}