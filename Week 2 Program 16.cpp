// Chapter 3
// Word Game
/**************************************
	Write a program that ask for the following information from the user
	1. Their name = name
	2. Name of city = city
	3. A fun activity they do = activity
	4. An animal = animal 
	5. A food or product = product
	6. A pet name = pet name
	7. A number between 10 - 50 = age
	8. A number between 0 - 15 = kids
***************************************/

#include <iostream>
#include <string>
using namespace std;


int main()
{
	// Strings for the story
	string	s1 = "There once was a person named ",
			s2 = " who lived in ",
			s3 = " and who loved ",
			s4 = ". At the age of ",
			s5 = ", ",
			s6 = " graduated from high school and went to work in a ",
			s7 = " factory. ",
			s8 = " got married and had ",
			s9 = " children and a pet ",
			s10 = " named ",
			s11 = ".\nEvery weekend the family and ",
			s12 = " had fun ",
			s13 = " together.";

	string name, city, activity, animal, product, petName;
	int age, kids;

	cout << "What is your name? ";
	getline(cin, name);

	cout << "What city are  you from? ";
	getline(cin, city);

	cout << "What kinds of hobby/activity do you enjoy doing? ";
	getline(cin, activity);

	cout << "What is your favorite animal? ";
	getline(cin, animal);

	cout << "What type of food/product do you enjoy buying? ";
	getline(cin, product);

	cout << "What is the name of your pet? ";
	getline(cin, petName);

	cout << "Enter a number between 10 and 45 ";
	cin >> age;

	cout << "How many kids you like to have? ";
	cin >> kids;



	cout << endl << s1 << name << s2 << city << s3 << activity;
	cout << s4 << age << s5 << name << s6 << product << s7;
	cout << name << s8 << kids << s9 << animal << s10 << petName;
	cout << s11 << petName << s12 << activity << s13 << endl;

	return 0;
}