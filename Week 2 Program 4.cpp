// Restaurant Bill
// A person buys a meal worth $44.50
// The tax is 6.75 percent and the tip is 15 percent of the total after the tax
// Display the meal cost, tax amount, tip amount , total bill

#include <iostream>
using namespace std;

int main()
{
	double totalCost = 44.50;
	double tax = .0675;
	double tip = .15;
	double taxAmount, tipAmount, total;


	taxAmount = totalCost * tax;
	tipAmount = (totalCost - taxAmount) * tip;
	total = taxAmount + tipAmount;

	cout << "The bill is $" << totalCost << endl;
	cout << "The tax amount of the bill with 6.75 percent is $" << taxAmount << endl;
	cout << "The tip amount of the bill with 15 percent is $" << tipAmount << endl;
	cout << "The total amount of charges added after the original meal price is $" << total << endl;
	cout << "The original meal price without tip or tax is $" << totalCost - total << endl;


	return 0;
}