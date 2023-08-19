#include <iostream>

// WAP to insert values in an array (sorted list) [DO NOT USE VECTOR]

void q_1(void) {
	std::cout << "Input the size of the array as an int: ";
	
	// take the input size and initialise an array
	int size;
	std::cin >> size;

	int array[size + 1]; // +1 for allocating space to an extra element
						 // to be inserted in the future.

	// take the array elements as input
	int buffer;
	std::cout << "Enter the elements separated by a space: ";
	for (int i = 0; i < size; i++) {
		std::cin >> buffer;
		array[i] = buffer;
	}

	// replace last element to be 0 (to account for garbage)
	array[size + 1] = 0;

	std::cout << "Enter the element to be inserted and at which index: ";
	int pos, value;

	std::cin >> value >> pos;
	
	// move all elements after (pos)th index to their next index
	for (int i = size + 1; i > pos; i--) {
		array[i] = array[i - 1];
	}

	// insert element
	array[pos] = value;

	// print updated element
	for (int i = 0; i < size + 1; i++) {
		std::cout << array[i] << std::endl;
	}
}

int main(void) {
	q_1();

	return 0;
}