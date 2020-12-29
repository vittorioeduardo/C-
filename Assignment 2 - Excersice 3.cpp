#include <iostream>
#include <string>
#include <algorithm> // Transform all inputs to UPPERCASE
#include<cctype>     // Transform all inputs to UPPERCASE
#include<functional> // Transform all inputs to UPPERCASE
using namespace std;

int main(){
	string LetterGrade = "";
	cout << "\nLetter grades are A, B, C, D, and F, possibly followed by + or - " << endl;
	cout << "\nEnter a letter grade: \n";
	cin >> LetterGrade;

	// Transform all inputs to UPPERCASE
	std::transform(LetterGrade.begin(), LetterGrade.end(), LetterGrade.begin(), std::ptr_fun<int, int>(std::toupper));

	if (LetterGrade == "A+")
		cout << "Your numeric value is 4.0" << endl;

	else if (LetterGrade == "A")
		cout << "Your numeric value is 3.9" << endl;

	else if (LetterGrade == "A-")
		cout << "Your numeric value is 3.6" << endl;

	else if (LetterGrade == "B+")
		cout << "Your numeric value is 3.3" << endl;

	else if (LetterGrade == "B")
		cout << "Your numeric value is 3.0" << endl;

	else if (LetterGrade == "C+")
		cout << "Your numeric value is 2.7" << endl;

	else if (LetterGrade == "C")
		cout << "Your numeric value is 2.4" << endl;

	else if (LetterGrade == "C-")
		cout << "Your numeric value is 2.1" << endl;

	else if (LetterGrade == "D+")
		cout << "Your numeric value is 1.5" << endl;

	else if (LetterGrade == "D")
		cout << "Your numeric value is 1.2" << endl;

	else if (LetterGrade == "D-")
		cout << "Your numeric value is 1.0" << endl;

	else if (LetterGrade == "F")
		cout << "Your numeric value is 0.0" << endl;

	else
		cout << "invalid entry !!";
	
	return 0;
}