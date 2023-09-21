#include <iostream>

/* 
	Given a sorted integer array containing duplicate
	count occurences of a given number, report the number 
	of times the element is repeated in the array. 
	If element does not exist, report that as well.
*/

int main(void) {
	int size;

	std::cout << "Enter the number of elements in the array: ";
	std::cin >> size;

	int array[size];

	std::cout << "Enter the elements separated by space: ";
	// input numbers
	for (int i = 0; i < size; i++) {
		std::cin >> array[i];
	}

	int target;
	std::cout << "Target = ";
	std::cin >> target;

	int result = 0;

	// traverse array
	for (int i = 0; i < size; i++) {
		if (array[i] == target) {
			result++;
		}
	}

	if (!result) {
		std::cout << "No element found!";
	} else {
		std::cout << "Element " << target << " found " << result << " times.";
		std::cout << std::endl;
	}

	return 0;
}