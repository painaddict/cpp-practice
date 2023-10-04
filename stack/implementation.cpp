#include <iostream>
#include "implementation.hpp"

stack* create_stack() {
	stack* s = new stack();
	return s;
}

int is_empty(stack* s) {
	if (s->top_pos == -1) {
		return 1;
	} else {
		return 0;
	}
}

int is_full(stack* s) {
	if (s->top_pos == MAX - 1) { // MAX - 1 will be the topmost element
		return 1;
	} else {
		return 0;
	}
}

int push(stack* s, int element) {
	if (!is_full(s)) {
		s->data[s->top_pos + 1] = element;
		s->top_pos++;
		return 1;
	} else {
		return 0;
	}
}

int pop(stack* s) {
	if (!is_empty(s)) {
		s->top_pos--;
		return s->data[s->top_pos];
	} else {
		return 0;
	}
}

void print_stack(stack* s) {
	std::cout << "The stack is: " << std::endl;
	for (int i = s->top_pos; i >= 0; i--) {
		std::cout << "| " << s->data[i] << " |" << std::endl;
		std::cout << " __ " << std::endl;
	}
}

int main(void) {
	// create stack
	stack* new_stack = create_stack();
	
	// fill with elements
	push(new_stack, 1);
	push(new_stack, 2);
	push(new_stack, 3);
	push(new_stack, 4);
	pop(new_stack);

	print_stack(new_stack);

	// remember to delete the allocated shit
	delete new_stack;

}