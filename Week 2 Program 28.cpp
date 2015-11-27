/***********************************************
	How many Calories

	A bag of cookies holds 40 cookies
	The bag claims that there are 10 servings in the bag
	Each serving is equal to 300 calories
	Write a program that ask the user for how many cookies they ate
	After report to them how many calories they consumed
**************************************************/
#include <iostream>
using namespace std;

int main()
{
	// We know that 4 cookies eaten is 300 calories consumed
	int cookiesEaten, calories, caloriesConsume;

	const int bag = 40, serving = 300;

	cout << "How many cookies did you eat from the bag? ";
	cin >> cookiesEaten;

	calories = cookiesEaten / 4;
	caloriesConsume = calories * serving;

	cout << "You ate a total of " << caloriesConsume << " calories." << endl;

	return 0;
}