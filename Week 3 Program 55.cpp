/*****************************************************
	Sales Bar Chart

	Write a program that asks the user to enter today’s sales rounded to the nearest $100 for each of three stores. 
	The program should then display a bar graph comparing each store’s sales.
	Create each bar in the graph by displaying a row of asterisks. 
	Each asterisk should represent $100 of sales.
	
	Here is an example of the program’s output. User input is shown in bold.
	Enter today’s sales for store 1: 1000[Enter]
	Enter today’s sales for store 2: 1200[Enter]
	Enter today’s sales for store 3: 900[Enter]
	DAILY SALES
	(each * = $100)
	Store 1: **********
	Store 2: ************
	Store 3: *********
******************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int store1, store2, store3; 
	string sales1, sales2, sales3;

	cout << "Enter today\'s sales for store 1: ";
	cin >> store1;	

	cout << "Enter today\'s sales for store 2: ";
	cin >> store2;

	cout << "Enter today\'s sales for store 3: ";
	cin >> store3;

	cout << endl << endl << "Daily Sales" << endl << endl;	

	for (int x = 100; x <= store1; x += 100)
	{
		sales1 += "*";
	}

	for (int x = 100; x <= store2; x += 100)
	{
		sales2 += "*";
	}

	for (int x = 100; x <= store3; x += 100)
	{
		sales3 += "*";
	}


	cout << "Store 1: " << sales1 << endl;
	cout << "Store 2: " << sales2 << endl;
	cout << "Store 3: " << sales3 << endl;

	return 0;
}