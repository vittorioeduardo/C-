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