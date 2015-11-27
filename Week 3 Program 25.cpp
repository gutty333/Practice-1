#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Enter an even number ";
	cin >> number;

	while (number % 2 != 0)
	{
		cout << "Number must be even, please enter an even number ";
		cin >> number;
	}

	cout << "Your number is " << number << endl;

	return 0;
}