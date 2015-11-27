#include <iostream>
#include <string>
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
	little = 2;
	big = 2000;
	cout << endl << endl << "The little number is " << little << endl;
	cout << "The big number is " << big << endl;


	// Program with different data types for float
	float distance = 1.49E8; // This mean 1.49 x 10^8
	double mass = 2E12; // This mean 12 x 10^12
	cout << endl << endl << "Value is of distance is " << distance << endl;
	cout << "Value of mass is " << mass << endl;



	// Program that prints out your age and weight
	const int age = 22;
	const double weight = 194.26;
	cout << endl << endl << "Program Output" << endl;
	cout << "My age is " << age << " and my weight is " << weight << " pounds." << endl;



	// Program with a string data type 
	string name = "Mike Wallace";
	cout << endl << endl << "The client is " << name << endl;
	cout << sizeof(name)<< endl;



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