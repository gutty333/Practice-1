// Chapter 3
// Green Fields Landscaping Program
/***************************************
	The List of steps a program must carry can be refer to general pseudo code
	1.Set the price for a cubic yard of mulch (currently $22.00) 
	2.Ask the user to input the number of square feet to be covered and the depth of the mulch to be spread over this area
	3.Calculate the number of cubic feet of mulch needed
	4.Calculate the number of cubic yards of mulch needed.
	5.Calculate the total price for that mulch
	6.Display the results
****************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	const double price = 22.00;
	double squareFeet, depth, cubicFeet, cubicYard, totalPrice;

	cout << "Enter the number of square feet and the inches of depth to be covered by mulch ";
	cin >> squareFeet >> depth;

	
	// To convert to cubic feet we need square feet * height in feet
	// Since the depth is in inches we convert to feet by dividing by 12
	cubicFeet = squareFeet * (depth / 12);

	// We know that 1 cubic yard is 27 cubic feet
	cubicYard = cubicFeet / 27;

	totalPrice = cubicYard * price;

	cout << "You square feet is " << squareFeet << " and the depth of the area to covered is " << depth << endl;
	cout << "You cubic feet is " << cubicFeet << " and the cubic yard of mulch is " << cubicYard << endl;
	cout << "To cover the area the price of the mulch will be $" << fixed << setprecision(2) << totalPrice << endl;


	return 0;
}