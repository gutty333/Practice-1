/*****************************************************
	Rectangle Display

	Write a program that asks the user for two positive integers between 2 and 10 to use for the length and width of a rectangle.
	If the numbers are different, the larger of the two numbers should be used for the length and the smaller for the width. 
	The program should then display a rectangle of this size on the screen using the character ‘X’. 
	
	For example, if the user enters either 2 5 or 5 2, the program should display the following:
	XXXXX
	XXXXX
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int length, width;

	do
	{
		cout << "What is the length of the rectangle? Insert values between 2-10 ";
		cin >> length;
	} while (length < 2 || length > 10);

	do
	{
		cout << "What is the width of the rectangle? Insert values between 2-10 ";
		cin >> width;
	} while (width < 2 || width > 10);


	if (length < width)
	{
		for (int x = 1; x <= length; x++)
		{
			for (int y = 1; y <= width; y++)
			{
				cout << "X";
			}
			cout << endl;
		}
	}
	else
	{
		for (int x = 1; x <= width; x++)
		{
			for (int y = 1; y <= length; y++)
			{
				cout << "X";
			}
			cout << endl;
		}
	}
	
	return 0;
}