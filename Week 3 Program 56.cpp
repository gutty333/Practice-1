/*****************************************************
	Savings Account Balance

	Write a program that  calculates  the balance  of a savings account  at the end of a three- month  
	period.  It should  ask  the  user  for  the  starting  balance  and  the  annual  interest rate.  
	A loop  should  then  iterate  once  for  every month  in the  period,  performing the following  
	steps:

	A)  Ask the user for the total  amount deposited  into the account  during  that  month and add it 
	to the balance.  Do not accept negative numbers.
	B)   Ask the  user  for  the  total  amount withdrawn from  the  account  during  that month  and  
	subtract it from  the  balance.  Do  not  accept  negative  numbers  or numbers  greater  than  the 
	balance  after  the deposits  for the month  have been added  in.
	C)   Calculate  the  interest  for  that  month.  The  monthly  interest  rate  is the  annual 
	interest  rate  divided  by 12. Multiply  the monthly  interest  rate  by the average  of that  
	month’s  starting   and  ending  balance  to  get  the  interest  amount for  the month.  This 
	amount should be added to the balance.

	After  the  last iteration, the  program should  display  a report  that  includes  the  following 
	information:
	• starting  balance at the beginning of the three-month period
	• total deposits made during the three months
	• total withdrawals made during the three months
	• total interest posted to the account during the three months
	• final balance



	Using Files—Savings Account Balance Modification

	Modify the Savings Account Balance program described in Programming Challenge 23 so
	that it writes the report to a file. After the program runs, print the file to hand in to your
	instructor.
******************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{

	double startingBalance, rate, month1, month2, month3, deposit1, deposit2, deposit3, withdraw1, withdraw2, withdraw3, balance;

	ofstream outfile;
	outfile.open("balance.txt");

	cout << "What is your starting balance: ";
	cin >> startingBalance;

	cout << "What is the annual interest rate? ";
	cin >> rate;
	
	rate = (rate / 100.0) / 12;

	cout << fixed << setprecision(2);

	for (int x = 1; x <= 3; x++)
	{
		if (x == 1)
		{
			do 
			{
				cout << "How much money did you deposit into your account on month " << x << "? ";
				cin >> deposit1;
			} while (deposit1 < 0);
			
			balance = startingBalance + deposit1;

			do
			{
				cout << "How much money did you withdraw from your account on month " << x << "? ";
				cin >> withdraw1;
			} while (withdraw1 < 0 || withdraw1 > balance);

			balance -= withdraw1;

			month1 = (rate * ((startingBalance + balance) / 2))+balance;
		}
		else if (x == 2)
		{
			do
			{
				cout << "How much money did you deposit into your account on month " << x << "? ";
				cin >> deposit2;
			} while (deposit2 < 0);

			balance = month1 + deposit2;

			do
			{
				cout << "How much money did you withdraw from your account on month " << x << "? ";
				cin >> withdraw2;
			} while (withdraw2 < 0 || withdraw2 > balance);

			balance -= withdraw2;

			month2 = (rate * ((month1 + balance) / 2))+balance;
		}
		else if (x == 3)
		{
			do
			{
				cout << "How much money did you deposit into your account on month " << x << "? ";
				cin >> deposit3;
			} while (deposit3 < 0);

			balance = month2 + deposit3;

			do
			{
				cout << "How much money did you withdraw from your account on month " << x << "? ";
				cin >> withdraw3;
			} while (withdraw3 < 0 || withdraw3 > balance);

			balance -= withdraw3;

			month3 = (rate * ((month2 + balance) / 2))+balance;
		}
	}

	cout << endl <<  "Your starting balance at the beginning of the three month period was: $" << startingBalance << endl;
	cout << "The total deposits made during the three month period was: $" << deposit1 + deposit2 + deposit3 << endl;
	cout << "The total withdrawals made during the three month period was: $" << withdraw1+withdraw2+withdraw3 << endl;
	cout << "The total interest rate for the three month period was: " << (rate * 100) * 3 << " percent" <<endl;
	cout << "The final balance after the three month period was: $" << month1 + month2 + month3 << endl;

	//Writing data to file
	outfile << endl << "Your starting balance at the beginning of the three month period was: $" << startingBalance << endl;
	outfile << "The total deposits made during the three month period was: $" << deposit1 + deposit2 + deposit3 << endl;
	outfile << "The total withdrawals made during the three month period was: $" << withdraw1 + withdraw2 + withdraw3 << endl;
	outfile << "The total interest rate for the three month period was: " << (rate * 100) * 3 << " percent" << endl;
	outfile << "The final balance after the three month period was: $" << month1 + month2 + month3 << endl;


	outfile.close();

	return 0;
}