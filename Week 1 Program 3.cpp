// Simple program that ask for your favorite animal

#include <iostream>
#include <string>
using namespace std;


int main()
{

	string animal;

	cout << "Enter your favorite animal: ";
	cin >> animal;

	cout << "Your favorite animal is a/an " << animal << endl;

	return 0;
}