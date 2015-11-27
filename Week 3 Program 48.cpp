/*****************************************************
	
	Write a program similar to this example

	Enter the number for the player to guess.
	-12
	Enter your guess.
	100 lower
	Enter your guess.
	50 lower
	Enter your guess.
	-2000 higher
	Enter your guess.
	-12
	You guessed it in 4 tries.
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int number, guess, count = 0;

	cout << "Enter the number for the player to guess." << endl;
	cin >> number;


	do 
	{
		cout << "Enter your guess. ";
		cin >> guess;

		count++;
		if (guess < number)
		{
			cout << guess << " higher" << endl;
		}
		else if (guess > number)
		{
			cout << guess << " lower" << endl;
		}
		else
		{
			cout << guess << endl;
		}

		
	} while (guess != number);

	cout << "You guessed it in " << count << " tries" << endl;



	return 0;
}