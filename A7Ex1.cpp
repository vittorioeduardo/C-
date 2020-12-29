/*Use a vector to solve the following problem. Read in 20 numbers, each of which is between 10 and 100, 
inclusive. As each number is read, validate it and store it in the vector only if it isn't a duplicate 
of a number already read. After reading all the values, display only the unique values that the user 
entered. Begin with an empty vector and use its push_back function to add each unique value to the 
vector. */
#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>& num, int n){
	for (int i = 0; i < num.size(); ++i){
		if (num[i] == n){
			return i;
		}
	}
	return -1;
}

int main(){
	vector<int> num;
	int n;
	for (int i = 0; i < 20; ++i){
		cout << "Enter an integer: ";
		cin >> n;
		if (n >= 10 && n <= 100 && find(num, n) == -1){
			num.push_back(n);
		}
	}
	cout << "Unique values in the vector are: ";

	for (int i = 0; i < num.size(); ++i){
		cout << num[i] << ", ";
	}
	cout << "\n";
	return 0;
}
/*
SAMPLE RUN:
Enter an integer: 105
Enter an integer: 5
Enter an integer: 10
Enter an integer: 11
Enter an integer: 11
Enter an integer: 12
Enter an integer: 13
Enter an integer: 14
Enter an integer: 15
Enter an integer: 15
Enter an integer: 16
Enter an integer: 17
Enter an integer: 18
Enter an integer: 19
Enter an integer: 20
Enter an integer: 21
Enter an integer: 22
Enter an integer: 23
Enter an integer: 24
Enter an integer: 25
Enter an integer: 26
Enter an integer: 27
Enter an integer: 28
Enter an integer: 29

Unique values in the vector are:
10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29
*/