/***********************************************
	Math tutor
	
	Write a program that should display two random numbers between 1-9
	The number must then be added
	The student must then figure out the answer for the two numbers being added
	After show the student the correct answer
**************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	int seed = time(0);

	// Random seeding each time we run the program
	srand(seed);

	int x = rand() % 9 + 1;
	int y = rand() % 9 + 1;
	int total = x + y;
	int student;

	cout << "What is " << x << " + " << y << " = ";
	cin >> student;

	cout << "Your answer is " << student << " and the correct answer is " << total << endl;

	if (student == total)
	{
		cout << "You answer is correct" << endl;
	}
	else
	{
		cout << "You answer is incorrect" << endl;
	}



	return 0;
}