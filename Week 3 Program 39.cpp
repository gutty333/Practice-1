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
	int seed = time(0);
	int number, guess, count = 1;
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

	if (count == 0)
	{
		cout << endl << "Congratulations. You figured out my number." << endl;
	}
	else
	{
		cout << endl << "Congratulations. You figured out my number in " << count << " tries" << endl;
	}
	
	
	return 0;
}