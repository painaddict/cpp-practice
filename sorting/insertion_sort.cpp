#include <iostream>

int main(void) {
	// Demonstrate an implementation of the insertion 
	// sort algorithm.

	int array[5] = {2, 1, 99, 471, 0};
	int size = sizeof(array) / sizeof(array[0]);

	// O(n^2) 
	// Iterate through each element and compare it with "left". 
	// Swap if needed

	int temp;
	
	for (int i = 1; i < size; i++) {
		for (int j = i; j > 0; j--) {
			if (array[j] < array[j - 1]) {
				// swap routine
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
	
	// print the result
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}

	return 0;
}
