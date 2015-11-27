/***********************************************
	Interest Earned

	Use the formula below
	Amount = Principal * (1 + Rate/T)^T
	1. Ask the user for the principal, the interest rate, and the time
	It should display similar to this:
	Interest Rate:			4.25%
	Times Compounded:		12
	Principal:				$ 1000.00
	Interest:				$ 43.33
	Final balance:			$ 1043.33
**************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double principal, rate, interest, amount;
	int time;
	
	cout << "What is your principal: ";
	cin >> principal;

	cout << "What is your interest rate: ";
	cin >> rate;

	cout << "What is your time: ";
	cin >> time ;
	cout << left << setw(30) << "Interest Rate:" << fixed << setprecision(2) << right << setw(11) << rate << "%" << endl;

	rate /= 100; // Changing to a percentage
	amount = principal * pow(1 + (rate / time), time);
	interest = amount - principal;

	
	cout << left << setw(30) << "Times Compounded:" << right << setw(11) << time << endl;
	cout << left << setw(30) << "Principal:" << "$" << right << setw(10) << principal << endl;
	cout << left << setw(30) << "Interest:" << "$" << right << setw(10) << interest << endl;
	cout << left << setw(30) << "Final balance:" << "$" << right << setw(10) << amount << endl;

	return 0;
}