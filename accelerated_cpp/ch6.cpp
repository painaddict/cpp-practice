#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int q3() {
	vector<int> u(10, 100);
	vector<int> v;
	// Segmentation fault, because size of v is null
	// copy(u.begin(), u.end(), v.begin());
	copy(u.begin(), u.end(), back_inserter(v));
	return 0;
}

int q9() {
	vector<string> vec = {"try", "harder", "dude"};
	string result;
	for (vector<string>::iterator iter = vec.begin(); iter < vec.end(); iter++) {
		result += *iter;
	}
	cout << result;
	return 0;
}

int main() {
	q3();
	q9();
}