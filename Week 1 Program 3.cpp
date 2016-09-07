// Simple program that ask for your favorite animal

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string species;

	cout << "What is your favorite animal? ";
	getline(cin, species);

	cout << endl << "Your favorite animal is a/an " << species << endl;
	

	return 0;
}