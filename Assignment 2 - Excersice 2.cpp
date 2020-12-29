/*
Write a program that inputs the amount of the purchase and calculates the shipping charge based on the following table:
$0.00 - $250.00: $5.00
$250.01 - $500.00: $8.00
$500.01 - $1,000.00: $10.00
$1,000.01 - $5,000.00: $15.00
over $5,000.00: $20.00

Sample Output from Program:

RUN#1:
     Enter a purchase amount to find out your shipping charges.

     Please enter the amount of your purchase: 234.65
     The shipping charge on a purchase of $234.65 is $5.00.

*/
#include <iostream>
using namespace std;
int main() {
	float purchase = 0;
	cout << "Enter a purchase amount to find out your shipping charges: " << endl;
	cin >> purchase;

	if ((purchase > 0.00) && (purchase <= 250.00))
		cout << "The shipping charge on a purchase of $" << purchase << " is $5.00" << endl;
	else {
		if ((purchase > 250.00) && (purchase <= 500.00)) {
			cout << "The shipping charge on a purchase of $" << purchase << " is $8.00" << endl;
		}
		else {
			if ((purchase > 500.00) && (purchase <= 1000.00)) {
				cout << "The shipping charge on a purchase of $" << purchase << " is $10.00" << endl;
			}
			else {
				if ((purchase > 1000.00) && (purchase <= 5000.00)) {
					cout << "The shipping charge on a purchase of $" << purchase << " is $15.00" << endl;
				}
				else {
					cout << "The shipping charge on a purchase of $" << purchase << " is $20.00" << endl;
				}
			}
		}
	}

	return 0;
}
