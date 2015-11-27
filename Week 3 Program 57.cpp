/*****************************************************
	Using Files—Total and Average Rainfall

	Write a program that  reads in from a file a starting  month  name, an ending month  name, and then
	the monthly  rainfall for each month  during that period.  As it does this, it should sum the
	rainfall  amounts and  then  report  the  total  rainfall  and  average  rainfall  for the period.
	For example,  the output might look like this:

	During  the  months  of  March–June the  total  rainfall  was  7.32  inches  and  the  average
	monthly  rainfall was 1.83 inches.

	Data for the program can be found in the Rainfall.txt file.
	Hint:  After reading  in the month  names,  you will need to read  in rain  amounts until
	the EOF is reached,  and count  how many pieces of rain data  you read in.
******************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
	ifstream input;
	input.open("Rainfall.txt");

	string name, month1, month2;
	double value, total = 0, average, counter = 0;
	int x = 1;

	input >> month1;

	input >> month2;
	

	cout << fixed << setprecision(2);



	// This will read through the file until the end
	// It loops until the end of file
	// When there are no more items to read from the file, it will return false and the loop will end
	// If there are items to read, the loop will continue until it reaches the end
	while (input >> value)
	{
		total += value;
		counter++;
	}


	average = total / counter;
	cout << "During  the  months  of " << month1 << " through " << month2 << " the  total  rainfall  was " << total << " and the average monthly rainfall was " << average << endl;


	input.close();




	return 0;
}