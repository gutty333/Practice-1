/*****************************************************
	Write a file names num.txt
	Ask the user for how many values he wants to enter
	After write each value to the file
	For example, if nums.txt looks like this:
	34.5
	19.3
	14.6
	12.8
	-14.1
******************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;
	double value;

	cout << "How many values do you want to enter: ";
	cin >> number;

	ofstream output;
	output.open("nums.txt");


	for (int x = 1; x <= number; x++)
	{
		cout << x << " What is value ";
		cin >> value;
		output << value << endl;
	}

	output.close();

	return 0;
}