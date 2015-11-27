/***********************************************
	Stock Transaction Program

	Last month
	Joe purchased 100 shares of stock
	He paid 32.87 per share
	Joe paid to the broker 2% of the amount he paid for his stock

	2 months later
	Joe sold the stock for 33.97
	He again paid his broker 2% of the amount he received from selling

	Write a program that displays the following
	1. Amount of money Joe paid for his stock
	2. Amount he paid his broker when he bought the stock
	3. Amount he sold the stock for
	4. Amount he paid his broker when he sold the stock
	5. Amount of profit he made after selling and paying the brokers
**************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int share = 100;
	const double sharePrice = 32.87, shareSellingPrice = 33.97, percent = .02;

	double cost, brokerBought, sold, brokerSold, profit;

	cout << fixed << setprecision(2);
	cost = share * sharePrice;
	sold = share * shareSellingPrice;
	brokerBought = cost * percent;
	brokerSold = sold *percent;
	profit = sold - (cost + brokerBought + brokerSold);

	cout << "Joe bought his stock for $" << cost << endl;
	cout << "When Joe bought the stock he paid his broker $" << brokerBought << endl;
	cout << "Joe sold his stock for $" << sold << endl;
	cout << "When Joe sold the stock he paid his broker $" << brokerSold << endl;
	cout << "Joe made a total profit of $" << profit << endl;

	return 0;
}