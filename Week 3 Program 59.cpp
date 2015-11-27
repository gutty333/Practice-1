#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{

	ofstream output;

	string fileName, name, city, test;
	int age;

	cout << "Please name your .txt file: ";
	getline(cin, fileName);

	output.open(fileName.c_str());;

	ifstream input;
	input.open(fileName.c_str());

	cout << "What is your name? ";
	getline(cin, name);

	cout << "Where do you live? ";
	getline(cin, city);

	cout << "What is your age? ";
	cin >> age;

	

	output << "Name: " << name << endl;
	output << "Age: " << age << endl;
	output << "Location: " << city << endl;

	
	while (input >> test)
	{
		cout << test << endl;
	}

	input.close();
	output.close();


	return 0;
}