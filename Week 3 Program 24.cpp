#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char doAgain = 'y';
	int sum = 0;

	cout << "This code will increment sum 1 or more time" << endl;

	do
	{
		sum++;
		cout << "Sum has been incremented. Do you want to incremented again(Y/N)? ";
		cin >> doAgain;
	} while (toupper(doAgain) == 'Y');

	cout << "Sum was incremented " << sum << " times" << endl;

	return 0;
}