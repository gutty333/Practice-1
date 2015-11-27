/*****************************************************
	Math Tutor Version 2

	The program should display two random number between 10 and 50
	The numbers will be added
	The program should then wait for the student to enter an answer
	If the answer is correct say congrats
	If the answer is wrong let the user know and tell them the answer
******************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	int seed = time(0);
	int number1, number2, number3, total;

	srand(seed);

	number1 = rand() % 41 + 10;
	number2 = rand() % 41 + 10;
	total = number1 + number2;

	cout << right << setw(5) << number1 << endl;
	cout << right << setw(3) << "+ " << number2 << endl;
	cout << right << setw(5) << "__" << endl;
	cout << "What is the answer? ";
	cin >> number3;



	if (number3 == total)
	{
		cout << "Congratulations, you got the correct answer of " << number3 << endl;
	}
	else
	{
		cout << "Your answer is incorrect, the correct answer is " << total << endl;
	}


	return 0;
}