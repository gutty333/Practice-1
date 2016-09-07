#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	cout << "Hello World" << endl;
	cout << "You are awesome" << endl;
	cout << "This is fun \n";



	cout << endl << endl << "The works of Wolfgang\ninclude the following";
	cout << "\nThe Turkish March" << endl ;
	cout << "and Symphony No.40";
	cout << " in G minor." << endl;



	cout << endl << endl << "Billy Madison" << endl;
	cout << "1320 Pleasant Ave" << endl;
	cout << "Brooklyn, NY, 01001" << endl;
	cout << "415-489-7854" << endl;



	int little;
	int big;
	int medium;
	little = 2;
	big = 2000;
	medium = 200000;
	cout << endl << endl << "The little number is " << little << endl;
	cout << "The big number is " << big << endl;
	cout << "The medium number is " << medium << endl;


	// Program with different data types for float
	cout << fixed << setprecision(2) << endl;
	float distance = 1.49E8; // This mean 1.49 x 10^8
	double mass = 12E12; // This mean 12 x 10^12
	cout << endl << endl << "Value of distance is " << distance << endl;
	cout << "Value of mass is " << mass << endl;



	// Program that prints out your age and weight
	const int age = 22;
	const double weight = 194.26;
	cout << endl << endl << "Program Output" << endl;
	cout << "My age is " << age << " and my weight is " << weight << " pounds." << endl;



	// Program with a string data type 
	string name = "Mike Wallace";
	string temp = "Hello World this is awesome";
	int temp2 = 25;
	cout << endl << endl << "The client is " << name << endl;
	cout << sizeof(name)<< endl;
	cout << sizeof(temp) << endl;
	cout << sizeof(string) << endl;
	cout << sizeof(temp2) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(char) << endl;
	cout << name.length() << endl;



	// Arithmetic Program
	double	rate = 18.25,
			overRate = 27.38,
			hour = 40,
			overHour = 10,
			wage,
			overWage,
			total;
	//Base rate
	wage = rate * hour;
	//Overtime rate
	overWage = overRate * overHour;
	//Total
	total = wage + overWage;
	cout << endl << endl << total << endl;
	
	return 0;
}