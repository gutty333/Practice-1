#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;


int main()
{
	/*
	/*********************************************************
	Write a program that allows the user to enter the grade scored in a programming class (0-100).
	If the user scored a 100 then notify the user that they got a perfect score.
	Modify the program so that if the user scored a 90-100 it informs the user that they scored an A
	Modify the program so that it will notify the user of their letter grade
	0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
	
	int score;
	cout << "What did you score on your programming test? ";
	cin >> score;

	if (score <= 59)
		cout << endl << "Your grade is an F" << endl;
	else if ( score <= 69)
		cout << endl << "Your grade is a D" << endl;
	else if (score <= 79)
		cout << endl << "Your grade is a C" << endl;
	else if (score <= 89)
		cout << endl << "Your grade is a B" << endl;
	else if (score < 100)
		cout << endl << "Your grade is an A" << endl;
	else if (score == 100)
		cout << endl << "You got a perfect score" << endl;



	/*********************************************************
	Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
	Then allow the user to choose a beverage by entering a number 1-5.
	Output which beverage they chose.
	If you program uses if statements instead of a switch statement, modify it to use a switch statement.
	If instead your program uses a switch statement, modify it to use if/else-if statements.
	Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."
	
	int choice;
	string lineBreak;

	cout << endl << endl << "What is your favorite beverage: " << endl;
	cout << lineBreak.assign(35, '-') << endl;
	cout << setw(4) << "" << "1) Coke" << endl;
	cout << setw(4) << "" << "2) Sprite" << endl;
	cout << setw(4) << "" << "3) Water" << endl;
	cout << setw(4) << "" << "4) Orange Juice" << endl;
	cout << setw(4) << "" << "5) Beer" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:cout << "Your favorite beverage is Coke" << endl;
		break;
	case 2: cout << "Your favorite beverage is Sprite" << endl;
		break;
	case 3:cout << "Your favorite beverage is Water" << endl;
		break;
	case 4: cout << "Your favorite beverage is Orange Juice" << endl;
		break;
	case 5:cout << "Your favorite beverage is Beer" << endl;
		break;
	default: cout << "Error choice was not valid, here is your money back" << endl;
	}
	



	
	/*********************************************************
	Write a program that continues to asks the user to enter any number other than 5 until the user enters the number 5.
	Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.
	Modify the program so that after 10 iterations if the user still hasn't entered 5 will tell the user "Wow, you're more patient then I am, you win." and exit.
	Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc. The program must behave accordingly exiting when the user enters the number they were asked not to.)
	
	int number, counter = -1;

	do
	{
		counter++;
		cout << "Enter any number other than " << counter << endl;
		cin >> number;
		

		if (counter == 10)
		{
			cout << "Wow, you're more patient then I am, you win" << endl;
		}

		if (number == 5)
		{
			cout << "Hey! you weren\'t supposed to enter 5!" << endl;
		}
	} while (number != counter && number != 5  && counter < 10); 
	********************************************************* /





	/*********************************************************
	Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
	Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.
	Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.
	Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
	i.e.
	Person 4: ate 10 pancakes
	Person 3: ate 7 pancakes
	Person 8: ate 4 pancakes
	...
	Person 5: ate 0 pancakes
	*********************************************************/
	int pancake, large=0, least=1000*1000, order;

	for (int x = 1; x <= 10; x++)
	{
		cout << "How many pancakes did person " << x << " eat: ";
		cin >> pancake;

		if (pancake > large)
		{
			large = x;
		}

		if (pancake < least)
		{
			least = x;
		}
	}



	cout << "Person " << large << " ate the most pancakes" << endl;
	cout << "Person " << least << " are the least pancakes" << endl;








	return 0;
}