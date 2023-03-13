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

int main() {
	check_palindrome("plisilp");
	return 0;
}
