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
vector<Student_info> extract_fails(vector<Student_info>& students) {
	vector<Student_info> fail;
	vector<Student_info>::size_type i = 0;
	vector<Student_info>::size_type count = 0;

	// invariant: elements [0, i) of students represent passing grades
	while (i != students.size()) {
		if (fgrade(students[i])) {
			// fail.push_back(students[i]);
			// students.erase(students.begin() + i);
			students.insert(students.begin(), students[i]);
			count++;
		} else
			++i;
	}
	// resize after the process
	students.resize(count);	
return fail;
}

//q9 

int main() {
	check_palindrome("plisilp");
	return 0;
}
