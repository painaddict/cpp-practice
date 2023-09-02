#include <iostream>
#include <experimental/random>

int question(int* array, int size, int* result) { // receives and returns an array
	/* 
	   Create a function that receives an array with n unique elements,
	   permutes the array at random, and returns the result. The function 
	   should only consistently add extra space and not change the original
	   array. The function can return any of the six permutations, for
	   instance, if the input array is [1, 2, 3], then permutations may be
	   [1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], or [3, 2, 1].
	*/

	for (int i = 0; i < size; i++) {
		*(result + i) = *(array + size - i - 1);
	}

	return 0;
}

bool check(int* array, int element, int size) {
	for (int i = 0; i < size; i++) {
		if (*(array + i) == element) {
			return true;
		}
	}
	return false;
}
 
int rng(int* array, int size, int* result) {
	int rand;
	int indexes[size];

	for (int i = 0; i < size; i++) {
		rand = std::experimental::randint(0, size);

		indexes[i] = rand;

		// check
		if (check(indexes, rand, size)) {
			continue;
		}

		*(result + rand) = *(array + i);
	}
	return 0;
}

int* permute(int* array) { // receives and returns an array
	return array;
}

int main(void) {
	int size;

	std::cout << "Enter the size of the array: ";
	std::cin >> size;

	// define arrays (input and result)
	int test[size];
	int result[size];

	std::cout << "Enter " << size << " integer elements separated by space: ";
	
	// buffer variable
	int temp;

	for (int i = 0; i < size; i++) {
		// assign input as the elements of the test array
		std::cin >> temp;
		test[i] = temp;
	}

	std::cout << "The permuted array is: " << std::endl;

	// call the permute function with both arrays passed by reference 
	rng(test, size, result);
	// permute(test); // also a valid case

	// print the resultant array
	for (int i = 0; i < size; i++) {
		std::cout << result[i] << " ";
	}
	std::cout << std::endl;


	return 0;
}