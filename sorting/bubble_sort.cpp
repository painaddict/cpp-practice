#include <iostream>

int main(void) {
	// implement bubble sort
	// compares two adjacent elements and swaps them until they are in the intended order.

	int array[] = {79, 69, 669, 269, 169};
	int size  = sizeof(array) / sizeof(array[0]);

	int temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				// swap routine
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	// print the result
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
}