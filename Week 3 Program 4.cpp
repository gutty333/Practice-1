/*****************************************************
	Areas of Rectangles

	The area of a rectangle is length time width.
	Write a program that ask the user the length and the width of two rectangles
	The program should then tell the user which rectangle has a greater area or if they are equal
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int length, width, length2, width2, area , area2;
	cout << "What is the length and width of rectangle 1 ";
	cin >> length >> width;

	cout << "What is the length and width of rectangle 2 ";
	cin >> length2 >> width2;

	area = length * width;
	area2 = length2 * width2;

	if (area > area2)
	{
		cout << "Rectangle 1 has a greater area" << endl;
	}
	else if (area == area2)
	{
		cout << "Both rectangles are equal" << endl;
	}
	else
	{
		cout << "Rectangle 2 has a greater area" << endl;
	}

	return 0;

}