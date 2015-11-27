/*****************************************************
	Long Distance Calls

	A carrier charges the following rates for telephone calls between the United States and Mexico

		Time		Rate
	12:00 - 6:59	$0.12
	7:00 - 7:00		$0.55
	7:01 - 11:59	$0.35

	Write a program that ask for the starting time and the number of minutes of the call
	Display the charges
	The time should be entered as a floating point number (07.00 = 07:00)
******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double	rate1 = .12,
					rate2 = .55,
					rate3 = .35;

	float time, charges, extraCharges, minutes, extraMinutes;

	cout << "What is your starting time? ";
	cin >> time;

	cout << "How many minutes do you plan on using?	";
	cin >> minutes;
	cout << fixed << setprecision(2);


	// Working with military time, for the test conditions
	if (time >= 00.00 && time <= 06.59)
	{
		charges = minutes * rate1;

		// Test condition to see if the minutes go over the time range
		if ((minutes / 100.00) + time > 6.59)
		{
			extraMinutes = ((minutes/100.00) + time) - 6.59;
			extraMinutes *= 100;
			extraCharges = extraMinutes * rate2;
			charges = (minutes - extraMinutes) * rate1;

			cout << "Your charges/extra for making calls at " << time << " for " << static_cast<int>(minutes)  << " minutes will be $" << charges + extraCharges << endl;
		}
		else
		{
			cout << "Your charges for making calls at " << time << " for " << static_cast<int>(minutes) << " minutes will be $" << charges << endl;
		}
	}
	else if (time >= 07.00 && time <= 19.00)
	{
		charges = minutes * rate2;

		// Test condition to see if the minutes go over the time range
		if ((minutes / 100.00) + time  > 19.00)
		{
			extraMinutes = ((minutes / 100.00) + time) - 19.00;
			extraMinutes *= 100;
			extraCharges = extraMinutes * rate3;
			charges = (minutes - extraMinutes) * rate2;

			cout << "Your charges/extra for making calls at " << time << " for " << minutes * 100 << " minutes will be $" << charges + extraCharges << endl;
		}
		else
		{
			cout << "Your charges for making calls at " << time << " for " << static_cast<int>(minutes) << " minutes will be $" << charges << endl;
		}
	}
	else if (time >= 19.01 && time <= 23.59)
	{
		charges = minutes * rate3;

		// Test condition to see if the minutes go over the time range
		if ((minutes / 100.00) + time  > 23.59)
		{
			extraMinutes = ((minutes / 100.00) + time) - 23.59;
			extraMinutes *= 100;
			extraCharges = extraMinutes * rate1;
			charges = (minutes - extraMinutes) * rate3;

			cout << "Your charges/extra for making calls at " << time << " for " << minutes * 100 << " minutes will be $" << charges + extraCharges << endl;
		}
		else
		{
			cout << "Your charges for making calls at " << time << " for " << static_cast<int>(minutes) << " minutes will be $" << charges << endl;
		}
	}


	return 0;
}