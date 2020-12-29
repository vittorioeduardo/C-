#include <iostream>
using namespace std;
int main() {

	double gross[20];
	double commission[20];
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0;
	

	for (int k = 0; k < 20; k++) {
		cout << "Enter gross sales for salesperson #" << k + 1 << ": $";
		cin >> gross[k];

			commission[k] = 200 + (gross[k] * .09);

			if (commission[k] > 199 && commission[k] < 300) {
				a++;
			}
			else if (commission[k] > 299 && commission[k] < 400) {
				b++;
			}
			else if (commission[k] > 399 && commission[k] < 500) {
				c++;
			}
			else if (commission[k] > 499 && commission[k] < 600) {
				d++;
			}
			else if (commission[k] > 599 && commission[k] < 700) {
				e++;
			}
			else if (commission[k] > 699 && commission[k] < 800) {
				f++;
			}
			else if (commission[k] > 799 && commission[k] < 900) {
				g++;
			}
			else if (commission[k] > 899 && commission[k] < 1000) {
				h++;
			}
			else if (commission[k] > 999) {
				i++;
			}
			else
				break;
	}

	cout << endl;

	//----------------------------------------------------------------------------------------------
	// Print Results

	cout << "Displaying how many of the salespeople earned salaries in each of the following ranges" << endl;
	cout << endl;
	cout << "The number of salespeople earning in range $200 - 299: " << a << endl;
	cout << "The number of salespeople earning in range $300 - 399: " << b << endl;
	cout << "The number of salespeople earning in range $400 - 499: " << c << endl;
	cout << "The number of salespeople earning in range $500 - 599: " << d << endl;
	cout << "The number of salespeople earning in range $600 - 699: " << e << endl;
	cout << "The number of salespeople earning in range $700 - 799: " << f << endl;
	cout << "The number of salespeople earning in range $800 - 899: " << g << endl;
	cout << "The number of salespeople earning in range $900 - 999: " << h << endl;
	cout << "The number of salespeople earning in range $1000 and over: " << i << endl;
	cout << endl;
	//----------------------------------------------------------------------------------------------
	
	//----------------------------------------------------------------------------------------------
	// Checking if the math works A.K.A checking their commission per sale
	/*
	cout << "Displaying commision per gross sale entered" << endl;
	cout << endl;
	for (int k = 0; k < 20; k++) {
		cout << "commision per gross sale entered for salesperson #" << k + 1 << ": $";
		cout << commission[k] << "\n";
	}
	*/
	//----------------------------------------------------------------------------------------------
	return 0;
}