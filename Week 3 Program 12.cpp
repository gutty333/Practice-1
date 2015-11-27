/*****************************************************
	Running Race

	Write a program that ask the names of three runners
	Also ask for the time it took each of them to finish the race
	The program should display you can in first, second, and third
	Input validation, accept positive numbers for the time
******************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name1, name2, name3;
	int time1, time2, time3;

	cout << "Enter the name of runner 1 ";
	getline(cin, name1);
	
	cout << "Enter the name of runner 2 ";
	getline(cin, name2);
	
	cout << "Enter the name of runner 3 ";
	getline(cin, name3);

	cout << "What is the finish time for " << name1 << "  ";
	cin >> time1;

	cout << "What is the finish time for " << name2 << "  ";
	cin >> time2;

	cout << "What is the finish time for " << name3 << "  ";
	cin >> time3;


	if (time1 < time2 && time1 < time3)
	{
		cout << name1 << " came in first place" << endl;

		if (time2 < time3)
		{
			cout << name2 << " came in second place" << endl;
			cout << name3 << " came in third place" << endl;
		}
		else
		{
			cout << name3 << " came in second place" << endl;
			cout << name2 << " came in third place" << endl;
		}
	}
	else if (time2 < time1 && time2 < time3)
	{
		cout << name2 << " came in first place" << endl;

		if (time1 < time3)
		{
			cout << name1 << " came in second place" << endl;
			cout << name3 << " came in third place" << endl;
		}
		else
		{
			cout << name3 << " came in second place" << endl;
			cout << name1 << " came in third place" << endl;
		}
	}
	else if (time3 < time1 && time3 < time2)
	{
		cout << name3 << " came in first place" << endl;

		if (time2 < time1)
		{
			cout << name2 << " came in second place" << endl;
			cout << name1 << " came in third place" << endl;
		}
		else
		{
			cout << name1 << " came in second place" << endl;
			cout << name2 << " came in third place" << endl;
		}
	}
	else
	{
		cout << "Some of the runners were tied" << endl;
	}


	return 0;
}