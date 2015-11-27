/*****************************************************
	Change for a Dollar Game

	Create a game changing game that ask the user to enter what coins to use to make a dollar
	The program should ask for the number of pennies, nickels, dimes, and quarters
	If the total value is equal to a dollar the program should congratulate the user
	If not the program should tell the user if his total amount is more or less than one dollar
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double	pennyValue = 0.01,
					nickelValue = 0.05,
					dimeValue = 0.10,
					quarterValue = 0.25;

	double pennies, nickels, dimes, quarters, total;

	cout << "How many pennies do you have? ";
	cin >> pennies;

	cout << "How many nickels do you have? ";
	cin >> nickels;

	cout << "How many dimes do you have? ";
	cin >> dimes;

	cout << "How many quarters do you have? ";
	cin >> quarters;

	// Total Value
	pennies *= pennyValue;
	nickels *= nickelValue;
	dimes *= dimeValue;
	quarters *= quarterValue;
	total = pennies + nickels + dimes + quarters;

	cout << fixed << setprecision(2);

	cout << "$" << total << endl;

	if (total == 1.00)
	{
		cout << "Congratulations you have exactly a dollar" << endl;
	}
	else if (total > 1.00)
	{
		cout << "Your total amount is greater than dollar" << endl;
	}
	else
	{
		cout << "Your total amount is less than a dollar" << endl;
	}

	return 0;


}