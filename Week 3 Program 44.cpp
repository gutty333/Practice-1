/*****************************************************
	Math Tutor Version 3

	This program started in Chapter 3 and was modified in Chapter 4. 
	Starting with the version described in Chapter 4, modify the program again so it displays a menu allowing the user to select an addition, subtraction, or multiplication problem. 
	The final selection on the menu should let the user quit the program. 
	After the user has finished the math problem, the program should display the menu again. 
	This process must repeat until the user chooses to quit the program. 
	If the user selects an item not on the menu, the program should print an error message and then display the menu again.
******************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;


int main()
{

	int choice, number1, number2, total , answer , seed;
	string line; // Used for line break


	do
	{
		// Math Menu
		cout << endl << endl << "What type of math problem do you want to do?" << endl;
		cout << line.assign(25, '-') << endl;
		cout << setw(5) << "" << "1: Addition" << endl;
		cout << setw(5) << "" << "2: Subtraction" << endl;
		cout << setw(5) << "" << "3: Multiplication" << endl;
		cout << setw(5) << "" << "4: Quit the program" << endl;
		cin >> choice;

		// Random seeding
		seed = time(0);
		srand(seed);
		number1 = rand() % 41 + 10;
		number2 = rand() % 41 + 10;


		switch (choice)
		{
			// Addition Problem
			case 1: cout << endl << "What is " << number1 << " + " << number2 << " = ";
				cin >> answer;
				total = number1 + number2;
				if (answer == total)
				{
					cout << "Congratulations your answer is correct" << endl;
				}
				else
				{
					cout << "You are incorrect the correct answer is " << total << endl;
				}
				break;

			// Subtraction Problem
			case 2: cout << endl << "What is " << number1 << " - " << number2 << " = ";
				cin >> answer;
				total = number1 - number2;
				if (answer == total)
				{
					cout << "Congratulations your answer is correct" << endl;
				}
				else
				{
					cout << "You are incorrect the correct answer is " << total << endl;
				}
				break;
		
			// Multiplication Problem
			case 3: cout << endl << "What is " << number1 << " * " << number2 << " = ";
				cin >> answer;
				total = number1 * number2;
				if (answer == total)
				{
					cout << "Congratulations your answer is correct" << endl;
				}
				else
				{
					cout << "You are incorrect the correct answer is " << total << endl;
				}
				break;

			// End of Menu
			case 4: cout << endl << "Thank you for playing" << endl;
				break;

			default:
				cout << "Please choose one of the choices from the menu (1 - 4)" << endl;
		}
	} while (choice != 4);


	return 0;
}