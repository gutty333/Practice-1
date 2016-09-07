/*****************************************************
	Random Number Guessing Game

	Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is. 
	If the user’s guess is higher than the random number, the program should display “Too high. Try again.” 
	If the user’s guess is lower than the random number, the program should display “Too low. Try again.” 
	The program should use a loop that repeats until the user correctly guesses the random number. 
	Then the program should display “Congratulations. You figured out my number.”

	Random Number Guessing Game Enhancement

	Enhance the program that you wrote so it keeps a count of the number of guesses the user makes. 
	When the user correctly guesses the random number, 
	The program should display the number of guesses along with the message of congratulations.
******************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	int randomNum = rand() % 100 + 1;
	int guess2;
	int count2 = 0;

	do
	{
		cout << "Guess the number ";
		cin >> guess2;

		if (guess2 > randomNum)
		{
			cout << "Too high" << endl;
		}
		else if (guess2 < randomNum)
		{
			cout << "Too low" << endl;
		}

		count2++;
	} while (guess2 != randomNum);

	cout << "Congrats only " << count2 << " try/tries." << endl;

	cout << endl << endl;

	int seed = time(0);
	int number, guess, count = 0;
	srand(seed);
	number = rand() % 100 + 1;

	cout << "Guess what the random number is ";
	cin >> guess;

	do
	{
		if (guess > number)
		{
			cout << "Too high, try again ";
			cin >> guess;
		}
		else if (guess < number)
		{
			cout << "Too low, try again ";
			cin >> guess;
		}

		count++;
	} while (guess != number);

	if (count == 1)
	{
		cout << endl << "Congratulations. You figured out my number." << endl;
	}
	else
	{
		cout << endl << "Congratulations. You figured out my number in " << count << " tries" << endl;
	}
	
	
	return 0;
}