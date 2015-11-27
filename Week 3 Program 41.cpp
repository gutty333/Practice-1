/*****************************************************
	Student Line Up

	A teacher has asked all her students to line up single file according to their first name.
	For example, in one class Amy will be at the front of the line and Yolanda will be at the end. 
	Write a program that prompts the user to enter a number between 1 and 25
	for the number of students in the class, then loops to read in that many names. 
	Once all the names have been read in it reports which student would be at the front of the
	line and which one would be at the end of the line. 
	
	You may assume that no two students have the same name.


	Using Files—Student Line Up

	Modify the Student Line Up program described in Programming Challenge 13 so that it
	gets the names from a data file. Names should be read in until there is no more data to
	read. Data to test your program can be found in the LineUp.txt file.
******************************************************/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int students;
	string name, first= "Z", last = "A";

	ifstream input;
	input.open("LineUp.txt");


	/************************************************

	This is the older version without using the data from a file
	--------------------------------------------------------------
	do
	{
		cout << "How many students are in the class, enter a number between 1 and 25 ";
		cin >> students;
	} while (students < 1 || students > 25);




	for (int x = 1; x <= students; x++)
	{
		cout << "What is the name of student " << x << " ? ";
		cin >> name;

		if (name < first)
		{
			first = name;
		}

		if (name > last)
		{
			last = name;
		}

	}
	**********************************************/



	// New version using a file to get the student names

	while (input >> name)
	{
		if (name < first)
		{
			first = name;
		}

		if (name > last)
		{
			last = name;
		}
	}

	cout << first << " will be first in line" << endl;
	cout << last << " will be last in line" << endl;


	input.close();

	return 0;
}