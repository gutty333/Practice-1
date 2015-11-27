/***********************************************
	How Many Widgets

	A company makes widgets that weight 9.2 pounds each
	Write a program that calculates how many widgets are stacked on a pallet
	Ask the user for the weight of the pallet by itself and the total weight with widgets included
	After display how many widgets in total were stacked
**************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	const double weight = 9.2;

	int widget;
	double palletWeight, totalWeight, widgetWeight;

	cout << "How much does the pallet weight without the widgets? ";
	cin >> palletWeight;

	cout << "How much does the pallet weight with the widgets? ";
	cin >> totalWeight;

	widgetWeight = totalWeight - palletWeight;

	widget = widgetWeight / weight;

	cout << "The total number of widgets in the stacked are " << widget << endl;



	return 0;
}