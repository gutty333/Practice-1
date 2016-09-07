/***********************************************
	Housing Costs

	Write a program that ask users to enter their monthly cost for each of these categories
	1. Rent or mortgage
	2. Utilities
	3. Phone
	4. Cable
	After display the total monthly cost from all the expenses and the total annual cost
**************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double rent, utilities, phone, cable, monthCost,  annualCost;

	cout << "How much do you pay for your rent? ";
	cin >> rent;

	cout << "How much do you pay for your utilities per month? ";
	cin >> utilities;

	cout << "How much do you pay for your phone per month? ";
	cin >> phone;

	cout << "How much do you pay for your cable per month? ";
	cin >> cable;

	monthCost = rent + utilities + phone + cable;

	annualCost = monthCost * 12;

	cout << "Your monthly cost is " << fixed << setprecision(2) << monthCost << endl;
	cout << "Your annual cost is " << annualCost << endl;

	return 0;
}