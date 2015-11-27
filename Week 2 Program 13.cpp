// Stock Loss
// Kat bought 600 shares of stock for the price of $21.77 per share
// One year later she sold the stock for $16.44 per share
// Display the amount it paid for the stock
// Display the amount she sold the stock for
// Display the total amount she lost

#include <iostream>
using namespace std;


int main()
{
	int stock = 600;
	double originalPrice = 21.77;
	double price = 16.44;

	double cost = stock * originalPrice;
	double sell = stock * price;
	double lost = cost - sell;

	cout << "The cost of the stock is $" << cost << endl;
	cout << "The price for the selling the stock is $" << sell << endl;
	cout << "The amount of money Kat lost from selling the stock is $" << lost << endl;


	return 0;
}