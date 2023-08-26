#include <iostream>

void display_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void binary_search(int arr[], int size, int target) {
	// define indexes of the array
	int start = 0, end = size - 1;
	int mid = (start + end) / 2;

	bool found = false;

	while (!found) {

		if (arr[mid] == target) {
			found = true;
			std::cout << "Target found at index " << mid;
		}

		else if (arr[mid] > target) {
			end = mid - 1;		
		}

		else if (arr[mid] < target) {
			start = mid + 1;	
		}
		mid = (start + end) / 2;
		
	} 
	if (!found) {
		std::cout << "Target not found !!!" << std::endl;
	}
}

int main(void) {
	// Demonstrate an implementation of the binary search
	// algorithm on a sorted array.
	int array[10] = {1, 2, 4, 6, 9, 20, 21, 45, 65, 99};
	int size = sizeof(array) / sizeof(array[0]);

	std::cout << "Sorted array: ";
	display_array(array, size);

	int target;

	std::cin >> target;

	binary_search(array, size, target);

}