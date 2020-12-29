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