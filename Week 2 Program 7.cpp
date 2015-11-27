// Distance per Tank of Gas
// A car with 20 gallon(is 1 gas tank) travels 21.5 miles per gallon in town and 26.8 miles per gallon on highway
// What will the car travel with one gas tank on the town and on the highway

#include <iostream>
using namespace std;

int main()
{
	int gasTank = 20;
	double townMiles = 21.5;
	double highwayMiles = 26.8;

	cout << "Total miles you can travel in the town is " << gasTank * townMiles << endl;
	cout << "Total miles you can travel in the highway is " << gasTank * highwayMiles << endl;


	return 0;
}