/*****************************************************
	Write a code segment that creates an ifstream object named infile
	Opens the number.txt file created by the code in the previous program and associates it with infile
	The code should then use a loop to read and display all the numbers in the file before closing it
******************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile; // Creates object filed infile for reading data
	infile.open("number.txt"); // Opens the number.txt file to read the data
	int x;

	for (int number = 1; number <= 100; number++)
	{
		infile >> x; // Takes the data and assigns it to the x variable
		cout << x << endl;
	}


	infile.close(); // Closes the file

	return 0;
}