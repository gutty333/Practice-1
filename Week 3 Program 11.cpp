/*****************************************************
	Geometry Calculator

	Write a program that displays the following menu

	Geometry Calculator

		1. Calculate the Area of a Circle
		2. Calculate the Area of a Rectangle
		3. Calculate the Area of a Triangle
		4. Quit

	Enter your choice (1-4):

	If the user enter 1, than ask for the radius of the circle and display the area.
	Use 3.14159 as your pie value
	If the user enter 2, find the area
	If they enter 3, find the area of triangle
	If they enter 4, the program should end
******************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
	const double pie = 3.14159;

	double area;
	int choice;


	cout << "Geometry Calculator" << endl << endl;
	cout << setw(5) << " " << "1. Calculate the Area of a Circle" << endl;
	cout << setw(5) << " " << "2. Calculate the Area of a Rectangle" << endl;
	cout << setw(5) << " " << "3. Calculate the Area of a Triangle" << endl;
	cout << setw(5) << " " << "4. Quit " << endl;
	cout << endl << endl << "Enter your choice (1-4): ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			double radius;
			cout << "What is the radius of the circle? ";
			cin >> radius;
			area = pie * (pow(radius, 2));
			cout << "The area of the circle is " << area << endl;
			break;

		case 2:
			double length, width;
			cout << "What is the length and width of the rectangle? ";
			cin >> length >> width;
			area = length * width;
			cout << "The area of the rectangle is " << area << endl;
			break;

		case 3:
			double base, height;
			cout << "What is the base and height of the triangle? ";
			cin >> base >> height;
			area = (base * height) / 2;
			cout << "The area of the triangle is " << area << endl;
			break;

		case 4:
			break;
		default:
			cout << "Please select an option from 1 to 4" << endl;
	}





	return 0;
}