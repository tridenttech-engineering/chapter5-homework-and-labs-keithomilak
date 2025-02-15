//lab5-2.cpp - displays the total amount due
//Created/revised by <Keith Omilak> on <2/10/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double discountRate = 0.10;
	double discount = 0.0;
	double shippingFee = 0.0;
	double purchaseAmount = 0.0;
	double totalAmount = 0.0;
	bool premierClub = false;
	char clubAnswer = ' ';

	// Enter the purchase amount
	cout << "Enter the purchase amount: " << endl;
	cin >> purchaseAmount;

	// Determine if the customer is a premier club member
	cout << "Are you a premier club member? Y/N" << endl;
	cin >> clubAnswer;

	//adjust premier status if applicable
	clubAnswer = toupper(clubAnswer);
	if (clubAnswer == 'Y'){
		premierClub = true;
	}//end if

	//apply discount if applicable
	if (premierClub == true) {
		discount = purchaseAmount * discountRate;
	}//end if

	//adjust shipping fee if applicable
	if (purchaseAmount >= 100.00){
		shippingFee = 0.99;
	}
	else{
		shippingFee = 4.99;
	}//end if
	
	//calculate total amount
	cout << fixed << setprecision(2);
	totalAmount = purchaseAmount - discount + shippingFee;

	//display results
	cout << "Purchase amount: $" << purchaseAmount << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Shipping fee: $" << shippingFee << endl;
	cout << "Total amount: $" << totalAmount << endl;
	

	return 0;
}	//end of main function