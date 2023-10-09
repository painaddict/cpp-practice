#include <iostream>
#include "defs.h"

void traverse(node* head) {
	while (head -> next_node != NULL) {
		std::cout << head -> store << " -> ";
		head = head -> next_node;
	}
	std::cout << head -> store;
}

int main(void) {
	node* head = new node();
	node* element_1 = new node();
	node* element_2 = new node();

	head -> store = 69;
	head -> next_node = element_1;

	element_1 -> store = 420;
	element_1 -> next_node = element_2;

	element_2 -> store = 666;

	traverse(head);

	return 0;
}