#include <iostream>

void q_1(void) {
	// WAP to insert values in an array at a given place (sorted list) [DO NOT USE VECTOR]

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

void q_2(void) {
	// WAP to delete an element from a given whose value is given or whose position is given. [DO NOT USE VECTOR]

	std::cout << "Input the size of the array as an int: ";
	
	// take the input size and initialise an array
	int size;
	std::cin >> size;

	int array[size];

	// take the array elements as input
	int buffer;
	std::cout << "Enter the elements separated by a space: ";
	for (int i = 0; i < size; i++) {
		std::cin >> buffer;
		array[i] = buffer;
	}

	std::cout << "Enter the index element to be deleted: ";
	int pos;

	std::cin >> pos;

	for (int i = pos + 1; i < size; i++) { // start replacing from the next element
		array[i - 1] = array[i];
	}	
	array[size - 1] = 0; // replace last element to be 0.

	std::cout << "Result:-" << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}
}

void q_3(void) {
	// WAP to find the location of a given element. 
	std::cout << "Input the size of the array as an int: ";
	
	// take the input size and initialise an array
	int size;
	std::cin >> size;

	int array[size];

	// take the array elements as input
	int buffer;
	std::cout << "Enter the elements separated by a space: ";
	for (int i = 0; i < size; i++) {
		std::cin >> buffer;
		array[i] = buffer;
	}

	int culprit;

	std::cout << "Enter the int value to be found in the array: ";
	std::cin >> culprit;

	// define a boolean for if the value is found
	bool found = false;

	// iterate and compare
	for (int i = 0; i < size; i++) {
		if (array[i] == culprit) {
			found = true;
			std::cout << "Found the element " << culprit << " at index " << i << std::endl;
			break;
		}
	}

	// if element is not found
	if (!found) {
		std::cout << "Element not found in the array!";
	}
}

void q_4(void) {
	// WAP to display the elements of the linear array
	std::cout << "Input the size of the array as an int: ";
	
	// take the input size and initialise an array
	int size;
	std::cin >> size;

	int array[size];

	// take the array elements as input
	int buffer;
	std::cout << "Enter the elements separated by a space: ";
	for (int i = 0; i < size; i++) {
		std::cin >> buffer;
		array[i] = buffer;
	}

	// iterate and display all the values

	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}

}

int main(void) {
	//q_1();
	//q_2();
	//q_3();
	q_4();
	return 0;
}