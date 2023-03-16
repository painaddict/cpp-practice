#include <iostream>
#include <string>
using namespace std;

int main() {
	// example 1 - put code inside braces unnecessarily (to control scope?)
	{cout << "Hi" << endl;} // semicolon inside, compiles

	// example 2 - put code inside braces unnecessarily
	{cout << "World" << endl}; // semicolon outside, doesn't compile

	// example 3 - taken from textbook (1-5)
	{ string s = "a string";
	{ string x = s + ", really";
	cout << s << endl; }
	cout << x << endl; } // error: 'x' was not declared in this scope 
	// so yes, braces are used for scope

	return 0;
}