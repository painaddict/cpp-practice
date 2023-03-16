#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

// Find out the number of each distinct string in a 
// given input.

int q1() {
	vector<string> input;
	string x;
	cout << "Enter input till EOF (^d): ";
	while (cin >> x) {
		input.push_back(x);
	}
	int input_size = input.size();
	cout << "The number of total strings is: " << input_size << endl;
	//vector<int> occurences;
	string find;
	for (int i = 0; i < input_size; i++) {
		find = input[i];
		int count1 = count(input.begin(), input.end(), find);
		cout << find << " appears " << count1 << " times in the input!" << endl;
	}
	return 0;
}

// Report the length of the longest and shortest string in the 
// input.

int q2() {
	vector<string> input;
	string x;
	cout << "Enter input till EOF (^d): ";
	while (cin >> x) {
		input.push_back(x);
	}
	int input_size = input.size();
	vector<int> sizes;

	for (int i = 0; i < input_size; i++) {
		sizes.push_back(input[i].length());
	}

	sort(sizes.begin(), sizes.end());
	cout << "Smallest size is " << sizes[0] << endl;
	cout << "Largest size is " << sizes[input_size - 1] << endl;

	return 0;
}

int q3() {
	// divison by zero (3-6)

	cout << 1/0 << endl;
	return 0;

	// floating point exception is encountered.
}

int main() {
	// q1();
	// q2();
	q3();
}