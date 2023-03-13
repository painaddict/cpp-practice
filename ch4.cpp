#include <iostream>
#include <vector>

int q2() {
	for (int i = 0; i <= 100; i++) {
		std::cout << std::cout.width(2) << i << std::cout.width(6) << i*i << std::endl; // idk what i did
	}
	return 0;
}

int q5() {
	// already done in ch3
	return 0;
}

int q7() {
	std::vector<double> test{1, 2, 3, 4};
	int size = test.size();
	double average;

	for (int i = 0; i < size; i++) {
		average += test[i];
	}
	std::cout << "Average is " << (average / size) << std::endl; 
	return 0;
}

int main() {
	// q2();
	q7();
	return 0;
}