//hw5-12.cpp - displays the total owed
//Created/revised by <Keith Omilak> on <2/15/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//declare and initialize variables
	const double discountRate = 0.50;
	double discount = 0.0;
	double saleItem1 = 0.0;
	double saleItem2 = 0.0;
	double totalAmount = 0.0;

	//prompt user for input
	cout << "Please enter the price of item 1: " << endl;
	cin >> saleItem1;
	cout << "Please enter the price of item 2: " << endl;
	cin >> saleItem2;

	//sort items by price - saleItem2 should be the lowest price after executing
	if (saleItem1 < saleItem2) {
		double temp = saleItem1;
		saleItem1 = saleItem2;
		saleItem2 = temp;
	}

	//apply discount for saleItem2
	discount = saleItem2 * discountRate;

	//calculate total amount
	totalAmount = saleItem1 + saleItem2 - discount;

	//display results
	cout << fixed << setprecision (2) 
			 << "Item one: $ " << saleItem1 << endl
			 <<	"Item two: $ " << saleItem2 << endl
			 << "Discount: $ " << discount << endl
			 << "Total: $ " << totalAmount << endl;
	
	return 0;
}	//end of main function