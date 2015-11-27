/*****************************************************
	Fat Gram Calculator

	Write a program that ask for the number of calories and fat grams in a food
	Display the percentage of calories that come from fat
	If the calories from fat are less than 30 percent of the total calories, it should tell the user that the food is low on fat

	1 gram of fat has 9 calories 
	calories from fat = fat gram * 9
	percentage = calories from fat / total calories

	Input Validation, make sure that the number of calories and the fat grams is greater than 0, also that the calories from fat is not greater than the total calories
******************************************************/
#include <iostream>
using namespace std;

int main()
{

	double calories, fat, percentage;

	cout << "How much total calories does the food have? ";
	cin >> calories;

	cout << "How many grams of fat does the food have? ";
	cin >> fat;

	fat *= 9;
	percentage = fat / calories;
	cout << "The percentage of calories from fat in your food is " << percentage * 100 << "%" << endl;
	

	if (calories < 0 || fat < 0 || fat > calories)
	{
		cout << "Please check your values" << endl;
	}
	else if (percentage < 0.30)
	{
		cout << "Wow nice, your food is low on fat" << endl;
	}
	else
	{
		cout << "Be careful, your food contains a lot of fat" << endl;
	}


	return 0;
}