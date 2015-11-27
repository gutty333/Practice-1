/*****************************************************
	Write a code segment that creates an ofstream object named outfile. 
	Opens a file named numbers.txt and associates it with the object file defined
	The code should then use a loop to write the numbers 1 through 100 to the file before closing it 
******************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outfile; // This defines the object file
	outfile.open("number.txt"); // This opens the file

	for (int x = 1; x <= 100; x++)
	{
		outfile <<  x << endl; // Here we are writing data to the file
	}

	outfile.close(); // This will close the file, don't forget the parentheses.

	cout << "This is just a file loop" << endl;

	return 0;
}