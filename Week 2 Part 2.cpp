#include <iostream> // This is needed for input and output
#include <string> // This is needed for string data type
#include <cmath> // This is needed for math operations
#include <iomanip> // This is needed for formatting/spacing
#include <cstdlib> //This is needed for random numbers
#include <ctime> // This is needed for the time function
using namespace std;




int main()
{
	string lineBreak;
	lineBreak.assign(40, '-');

	// Multiple inputs in one line
	int length, width;
	cout << "Enter the length and width of the object ";
	cin >> length >> width;
	cout << "The length is " << length << " and the width is " << width << endl;


	cout << lineBreak << endl << endl;
	

	//Will calculate area of a circle
	double area, radius;
	cout << endl << endl << "What is the radius ";
	cin >> radius;
	area = 3.14 * pow(radius, 2);
	cout << "The area of your circle is " << area << endl;


	cout << lineBreak << endl << endl;

	
	// Formatting Output
	// The setw manipulator will add spaces
	cout << endl << endl << setw(20) << "Hello World" << endl;
	int num1 = 2312, num2 = 324, num3 = 4324;
	cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
	// The manipulators for decimal control
	double test1 = 12E4;
	cout << fixed << test1 << endl;
	double income = 3.1e6, test2 = 2;
	cout << "More set decimal practice " << setprecision(3) << fixed << income / test2 << endl;
	double x = 6.0;
	cout << x << endl;
	cout << showpoint << x << endl;
	cout << setprecision(2) << x << endl;
	cout << fixed << x << endl;
	// The most important ones are fixed and set precision
	double example = 34E4;
	cout << "Here is a good example " << setprecision(2) << fixed << example << endl ;


	cout << lineBreak << endl << endl;

	
	// Working with strings and characters
	string name = "Billy Madison";
	cout << endl << endl << "The length of the name string is " << name.length() << endl;
	// Sample Program
	string firstName, lastName, fullName, stars;
	int numStars;

	cout << "Enter your first name ";
	cin >> firstName;
	cout << "Enter your last name ";
	cin>> lastName;

	fullName = firstName + " " + lastName;
	numStars = fullName.length();
	stars.assign(numStars, '-');
	cout << numStars << endl;
	cout << stars << endl;
	cout << fullName << endl;
	cout << stars << endl;


	cout << lineBreak << endl << endl;


	// Working with Random Numbers
	cout << endl << endl << "Here are some random numbers without any seed or range " << rand() << " " << rand() << " " << rand() << endl;
	//Using a user input for the seed
	unsigned int seed;
	cout << "Enter a random number seed ";
	cin >> seed;

	srand(seed);
	cout << "Here are some random numbers with a seed, remember that you must have a different seed each time if you want the numbers to change when you run the program again " << rand() << " " << rand() << " " << rand() << endl;

	//Using the time function as a seed, this helps because you will not have to manually change
	unsigned int seed2 = time(0);
	srand(seed2);
	cout << "Here are some random numbers with a time seed " << rand() << " " << rand() << " " << rand() << endl;

	// Random Numbers with a scale range
	int number = rand() % 10000 + 1; // A number between 1 and 10000
	int number2 = rand() % 101 + 2000; // A number between 2000 and 2100
	cout << "A number between 1 and 10000 " << number << endl;
	cout << "A number between 2000 and 2100 " << number2 << endl;

	// Testing the time function
	int test3 = time(0);
	cout << "Testing to see if the value will change each time we run the program " << test3 << endl;
	int number3 = rand() % time(0) + 1;
	cout << "Another test to see a random number " << number3 << endl;
	return 0;
}