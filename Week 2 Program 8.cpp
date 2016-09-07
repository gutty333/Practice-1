// Land Calculation
// 1 acre is equal to 43,560 square feet
// 1 square meter is 10.7639 square feet
// Write a program that displays the number of square feet and the number of square meter in 1/4 acre of land


#include <iostream>
using namespace std;


int main()
{
	int acre = 43560;

	double squareMeter = 10.7639;

	double squareFeet;


	squareFeet = acre / 4;

	squareMeter = squareFeet / squareMeter;

	cout << "The number of square feet in 1/4 acre of land " << squareFeet << endl;
	cout << "The number of square meter in 1/4 acre of land " << squareMeter << endl;

	return 0;



}