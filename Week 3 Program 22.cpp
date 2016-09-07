/*****************************************************
	Write a nested loop that displays the following output

	*****
	*****
	*****
******************************************************/
#include <iostream>
using namespace std;

int main()
{
	for (int x = 1; x <= 3; x++)
	{
		for (int y = 1; y <= 5; y++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}