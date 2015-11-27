/*****************************************************
	Chapter 5 Loops

	Write a code that lets the user enter a number. 
	The number should be multiplied by 2 and printed until the number exceeds 50.
	Use a while loop
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Enter a number: "; 
	cin >> number;

	while (number <= 50)
	{
		cout << number << endl;
		number *= 2;
	}


	return 0;
}