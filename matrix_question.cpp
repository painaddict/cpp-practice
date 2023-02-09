/*Given an arbitrary m * n matrix of a combination of 
non-zero and one zero value, zero all the elements of
the row and column where the zero value is located.*/

#include <iostream>

using namespace std;

int question() {
	// ask for m and n
	int m, n;

	cout << "Enter M and N: ";
	cin >> m >> n;

	// define the array 
	int array[m][n];

	cout << "Enter the matrix elements: " << endl; 

	// ask the user to enter the array elements
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> array[i][j];
			//cout << " ";
		}
		cout << endl;
	}

	cout << "Entered Matrix:" << endl;

	// display the array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	int zero_row, zero_column;
	bool found;

	// check for zeroes in the array
	for (zero_row = 0; zero_row < m; zero_row++) {
		for (zero_column = 0; zero_column < n; zero_column++) {
			if (array[zero_row][zero_column] == 0) {
				cout << "Zero found at M[" << zero_row << "][" << zero_column << "]" << endl;
				found = true;
				break;
			}
		}
		if (found) {
			break;
		}
	}

	// set all corresponding elements to zero

		// setting the column
	for (int i = 0; i < m; i++) {
		array[i][zero_column] = 0;
	}

		// setting the row
	for (int i = 0; i < n; i++) {
		array[zero_row][i] = 0;
	}

	// display the result
	cout << "RESULT" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

int main() {
	question();
}

