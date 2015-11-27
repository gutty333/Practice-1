// Write a program that ask for the number of baseballs purchased.
// The cost of each baseball
// It should calculate and display the total spent

#include <iostream>
using namespace std;

int main()
{

	int baseballs, price, total;


	cout << "How many baseballs did you guys purchase last year? ";
	cin >> baseballs;


	cout << "What was the price of each baseball? ";
	cin >> price;


	total = baseballs * price;


	cout << "Your team spent a total of $" << total << " last year." << endl;

	return 0;
}