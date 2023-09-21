#include <iostream>

typedef struct Node {
	int store;
	struct Node * next_node;
} node;

int main(void) {
	// create nodes
	node* head = new node();
	node* element_1 = new node();

	head->next_node = element_1;
	head->store = 69;

	std::cout << element_1->next_node; // 0 (null)
}