/*****************************************************
	Write a program that reads a file called nums.txt and writes to a file called sum.txt. 
	
	The file  nums.txt will contain some number of double values, one to a line.  After reading in those values (which are 
	allowed to be negative), the program will add them together and then write to the file sum.txt what 
	the sum of those values is. For example, if nums.txt looks like this:
	34.5
	19.3
	14.6
	12.8
	-14.1

	Then after the program is run, sum.txt should consist of the single line: "The sum of the values is 
	67.1."
	The program should test whether the input file was opened successfully. If not, it should print an 
	error message and stop.
******************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream infile;
	infile.open("nums.txt");

	ofstream outfile;
	outfile.open("sum.txt");
	

	double value, total = 0;


	while (infile >> value)
	{
		total += value;
	}


	cout << fixed << setprecision(1);
	cout << "The sum of the values is " << total << endl;
	outfile << "The sum of the value is " << total << endl;

	infile.close();
	outfile.close();

	return 0;


}