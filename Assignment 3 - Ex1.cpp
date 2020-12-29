/*
A year with 366 days is called a leap year. A year is a leap year if it is divisible by four (for example, 1980), except that it is not a leap year if it is divisible by 100 (for example, 1900); however, it is a leap year if it is divisible by 400 (for example, 2000). There were no exceptions before the introduction of the Gregorian calendar on October 15, 1582 (1500 was a leap year). 

Write a program that asks the user for a year and computes whether that year is a leap year. 

Here are a few run results:

Please enter a year: 2015
2015 is not a leap year.
Press any key to continue . . .

Please enter a year: 2016
2016 is a leap year.
Press any key to continue . . .

Please enter a year: 1900
1900 is not a leap year.
Press any key to continue . . .
*/
#include<iostream>
using namespace std;
int main() {
	int year;
	char response;
	cout << "Is this a leap year?..." << endl;
	cout << "Would you like to verify a leap year? (Y/N) ";
	cin >> response;
	while ((response == 'Y') || (response == 'y')) {
		cout << "Enter year: ";
		cin >> year;
		if ((year % 4 == 0) && (year % 100 != 0)) {
			cout << year << ", is a leap year." << endl;
		}
		else if ((year % 400 == 0)){
			cout << year << ", is a leap year." << endl;
		}
		else {
			cout << year << ", is not a leap year" << endl;
		}
		cout << "would you like to verify another year? (Y/N) ";
		cin >> response;
	}
	return 0;
}
