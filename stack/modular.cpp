#include <iostream>
#include <stack>

int main(void) {
	// implement stack
	std::stack<int> new_stack;

	if (new_stack.empty()) {
		std::cout << "Stack is empty! Size is " << new_stack.size() << std::endl;
	}

	new_stack.push(99);
	new_stack.push(82);

	std::cout << new_stack.top();

}