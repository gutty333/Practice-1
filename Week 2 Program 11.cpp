// Pay Period Gross Pay
// An employee earn $32,500 annually
// Find the amount he is paid per check if he has 24 pay checks. twice a month
// Also what is his amount if he has 26 pay checks. bi weekly
// Display the results for the twice a month pay checks and the bi weekly paychecks

#include <iostream>
using namespace std;

int main()
{

	int salary = 32500;

	int biMonth = 24, biWeekly = 26;

	int biMonthPay, biWeeklyPay;

	biMonthPay = salary / biMonth;
	biWeeklyPay = salary / biWeekly;

	cout << "Your annual salary is $" << salary << endl;
	cout << "Your pay checks twice a monthly are each $" << biMonthPay << endl;
	cout << "Your pay checks if you are paid bi weekly are $" << biWeeklyPay << endl;


	return 0;
}