// Test if these programs are syntactically correct

#include <iostream>

using namespace std;

int weird_function() return 0; // doesn't work (braces are needed)

int main() {

// This is a comment that extends over several lines
// by using // at the beginning of each line instead of using /*
// or */ to delimit comments.
	cout << "Hello World.." << endl;
	cout << weird_function();
	return 0;
}
