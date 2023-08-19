#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int example() {
	string s;
	map<string, int> counters;

	while (cin >> s) {
		++counters[s];
	}

	for (map<string, int>::const_iterator iter = counters.begin(); iter != counters.end(); iter++) {
		cout << iter -> first << " " << iter -> second << endl;
	}
	return 0;

}

class Complex {
	int x, y;
public:
	friend ostream& operator <<(ostream cout, const Complex &c);
	friend istream& operator >>(istream &in, Complex &c);
};

int main() {
	example();
	return 0;
}