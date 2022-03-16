#include <iostream>
#include <iomanip>
using namespace std;

float processLineItem(int quantity, const char* description, float price) 
{
	float lineTotal = price * quantity;

	cout << setiosflags(ios::fixed);
	cout << setw(10) << quantity 
		<<setw(20)<< description 
		<<setw(6)<<setprecision(2) << price
		<<setw(6)<< setprecision(2) <<lineTotal << endl;
	return lineTotal;
}


int main() {
	float runningTotal = 0;
	cout << setw(10) << "Quantity"
		<< setw(20) << "Description"
		<< setw(6) << "Price"
		<< setw(6) << "Total" << endl;
	runningTotal += processLineItem(3, "Apples", .45F);
	runningTotal += processLineItem(1, "Bananas", .45F);
	runningTotal += processLineItem(2, "Oranges", 21.99F);

	cout << endl;
	cout << "The grocery bill totals are " <<  runningTotal << endl;

	return 0;
}