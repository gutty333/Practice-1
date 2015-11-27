/*****************************************************
	Membership  Fee Increase

	A country club, which currently charges $2500 per year for membership, has announced it
	will increase its membership fee by 4% each year for the next six years. Write a program
	that uses a loop to display the projected rates for the next six years.
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double	rate = 2500,
					percent = .04;
	double total = rate;

	for (int x = 1; x <= 6; x++)
	{
		cout << "In year " << x << " you will pay $" << fixed << setprecision(2) << total << endl;
		total = (rate * percent)+total;
	}



	return 0;
}