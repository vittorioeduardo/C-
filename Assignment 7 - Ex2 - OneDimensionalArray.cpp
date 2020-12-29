/*Use a one-dimensional array to solve the following problem: A company pays its salespeople on a commission basis. 
The salespeople each receive $200 per week plus 9 percent of their gross sales for that week. 
For example, a salesperson who grosses $5000 in sales in a week receives $200 plus 9 percent of $5000, or a total of $650. 
Write a program (using an array of counters), for a company with 20 employees, that determines how many of the salespeople earned salaries in each of the following ranges 
(assume that each salesperson's salary is truncated to an integer amount): a) $200-299 b) $300-399 c) $400-499 d) $500-599 
e) $600-699 f) $700-799 g) $800-899 h) $900-999 i) $1000 and over.

SAMPLE RUN:  
Enter gross sales for salesperson #1: 1000.82
Enter gross sales for salesperson #2: 2342
Enter gross sales for salesperson #3: 2238.32
Enter gross sales for salesperson #4: 1230
Enter gross sales for salesperson #5: 8453
Enter gross sales for salesperson #6: 7238
Enter gross sales for salesperson #7: 8991
Enter gross sales for salesperson #8: 131
Enter gross sales for salesperson #9: 2831.47
Enter gross sales for salesperson #10: 7932
Enter gross sales for salesperson #11: 2238
Enter gross sales for salesperson #12: 8927
Enter gross sales for salesperson #13: 8278
Enter gross sales for salesperson #14: 7839.12
Enter gross sales for salesperson #15: 7789
Enter gross sales for salesperson #16: 2072
Enter gross sales for salesperson #17: 5890
Enter gross sales for salesperson #18: 8084
Enter gross sales for salesperson #19: 7673.54
Enter gross sales for salesperson #20: 3149

Count of employees in each salary range:
The number of salespeople earning in range $200 - 299: 2
The number of salespeople earning in range $300 - 399: 2
The number of salespeople earning in range $400 - 499: 5
The number of salespeople earning in range $500 - 599: 0
The number of salespeople earning in range $600 - 699: 0
The number of salespeople earning in range $700 - 799: 1
The number of salespeople earning in range $800 - 899: 2
The number of salespeople earning in range $900 - 999: 6
The number of salespeople earning in range $1000 and over: 2
*/
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
