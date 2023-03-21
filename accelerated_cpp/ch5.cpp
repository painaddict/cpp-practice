#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
// q10
int check_palindrome(string input) {
	int size = input.size();
	for (int i = 0; i < size; i++) {
		if (input[i] != input[size - i - 1]) {
			cout << "Input is not a palindrome!" << endl;
			return 0;
		}
	}
	cout << "Input is a palindrome!" << endl;
	return 0;
}

// q6
// vector<Student_info> extract_fails(vector<Student_info>& students) {
// 	vector<Student_info> fail;
// 	vector<Student_info>::size_type i = 0;
// 	vector<Student_info>::size_type count = 0;

// 	// invariant: elements [0, i) of students represent passing grades
// 	while (i != students.size()) {
// 		if (fgrade(students[i])) {
// 			// fail.push_back(students[i]);
// 			// students.erase(students.begin() + i);
// 			students.insert(students.begin(), students[i]);
// 			count++;
// 		} else
// 			++i;
// 	}
// 	// resize after the process
// 	students.resize(count);	
// return fail;
// }

//q9 
int check_case(string word) {
	char first_char = word[0];
	if (first_char >= 65 && first_char <= 90) {
		return 1; // uppercase
	} else if (first_char >= 97 && first_char <= 172) {
		return 0; // lowercase
	} else {
		cout << "Word does not start with a valid letter!" << endl;
		return -1;
	}

}
int q9() {
	// write a program to write the lowercase words in the input
	// followed by the uppercase words.
	vector<string> inputs;
	string x;
	cout << "Enter Strings until EOF:-" << endl;
	while (cin >> x) {
		inputs.push_back(x);
	}
	for (int i = 0; i < inputs.size(); i++) {
		x = inputs[i];
		if (check_case(x) == 1) {
			inputs.push_back(x);
			inputs.erase(inputs.begin() + i);
		}
	}
	// display the result
	vector<string>::const_iterator iter;
	for (iter = inputs.begin(); iter <= inputs.end(); iter++) {
		cout << *iter << endl;
	}
	return 0;
}

int main() {
	check_palindrome("plisilp");
	q9();
	return 0;
}
