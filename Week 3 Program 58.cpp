/*****************************************************
	Using Files—Population  Bar Chart

	Write   a  program  that   produces   a  bar   chart   showing   the   population  growth   of 
	Prairie-ville,  a  small  town  in  the  Midwest,   at  20  year  intervals  during  the  past  100 
	years. The program should  read in the population figures (rounded to the nearest  1000 people)  for 
	 1910,  1930,  1950,  1970,  1990,  and  2010  from  a file. For  each  year  it should  display 
	the date  and a bar  consisting  of one asterisk  for each 1000  people.  The data  can be found  
	in the People.txt file.

	Here is an example of how the chart might begin:
	PRAIRIEVILLE POPULATION GROWTH (each * represents 1000 people)

	1910  **
	1930  ****
	1950  *****

******************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	ifstream input;
	input.open("People.txt");


	int year, people;


	for (year = 1910; year<=2010; year+=20)
	{
		cout << year << "	";

		input >> people;

		for (int x = 1; x <= people; x += 1000)
		{
			cout << "*";
		}

		cout << endl;
	}


	input.close();

	return 0;
}