/*****************************************************
	Personal Best

	Write a program that ask for the name of a pole vaulter
	Ask for the dates and vault heights of the athlete's three best vaults
	It should report the best height and their date
	Input Validation, only allow the program to accept values from 1 to 5
******************************************************/
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string name, date1, date2, date3;
	double height1, height2 , height3;

	cout << "What is your name? ";
	getline(cin, name);

	cout << "In what three dates did you do a vault jump? ";
	cin >> date1 >> date2 >> date3;

	cout << "On " << date1 << " what was your height in meters? ";
	cin >> height1;
	cout << "On " << date2 << " what was your height in meters? ";
	cin >> height2;
	cout << "On " << date3 << " what was your height in meters? ";
	cin >> height3;


	if (height1 > 5 || height2 > 5 || height3 > 5)
	{
		cout << "Please enter height value from 1 to 5" << endl;
	}
	else if (height1 > height2 && height1 > height3)
	{
		cout << name << " best jump was done " << date1 << " with a height of " << height1 << endl;

		if (height2 > height3)
		{
			cout << "Your second best jump was on " << date2 << " with a height of " << height2 << endl;
			cout << "Your third best jump was on " << date3 << " with a height of " << height3 << endl;
		}
		else
		{
			cout << "Your second best jump was on " << date3 << " with a height of " << height3 << endl;
			cout << "Your second best jump was on " << date2 << " with a height of " << height2 << endl;
		}
	}
	else if (height2 > height1 && height2 > height3)
	{
		cout << name << " best jump was done " << date2 << " with a height of " << height2 << endl;

		if (height1 > height3)
		{
			cout << "Your second best jump was on " << date1 << " with a height of " << height1 << endl;
			cout << "Your third best jump was on " << date3 << " with a height of " << height3 << endl;
		}
		else
		{
			cout << "Your second best jump was on " << date3 << " with a height of " << height3 << endl;
			cout << "Your second best jump was on " << date1 << " with a height of " << height1 << endl;
		}
	}
	else if (height3 > height2 && height3 > height1)
	{
		cout << name << " best jump was done " << date3 << " with a height of " << height3 << endl;

		if (height2 > height1)
		{
			cout << "Your second best jump was on " << date2 << " with a height of " << height2 << endl;
			cout << "Your third best jump was on " << date1 << " with a height of " << height1 << endl;
		}
		else
		{
			cout << "Your second best jump was on " << date1 << " with a height of " << height1 << endl;
			cout << "Your second best jump was on " << date2 << " with a height of " << height2 << endl;
		}
	}


	return 0;
}