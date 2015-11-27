/*****************************************************
	Chapter 5 Loops

	Write a for loop that displays the following a set of numbers:
	0 , 10, 20, 30, 40, 50, .....1000
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	for (int x = 0; x <= 1000; x += 10)
	{
		cout <<x << ", ";
	}

	return 0;
}