/*****************************************************
	Characters for the ASCII Codes

	Write a program that uses a loop to display the characters for each ASCII code
	32 through 127
	Display 16 characters on each line with one space between characters
******************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{

	for (int x = 32; x <= 127; x)
	{
		for (int y = 1; y <= 16; y++)
		{
			cout << char(x) << " ";
			x++;
		}
		cout << endl;
	}

	return 0;
}