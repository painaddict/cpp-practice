#include <iostream>
#include "defs.h"

int add_element(node* head, int data, int position) {
	// skip to position
	while (position > 0) {
		if (head->next_node == NULL) {
			return 0;
		}
		head = head->next_node;
		position--;
	}
	node* new_node = new node();
	node* existing_node = head->next_node;

	// set node values
	new_node->store = data;
	new_node->next_node = existing_node;

	head->next_node = new_node;

	return 1;
}

int main(void) {
	node* head = new node();

	node* node_1 = new node();
	node* node_2 = new node();
	node* node_3 = new node();

	head->next_node = node_1;
	node_1->next_node = node_2;
	node_2->next_node = node_3; // end

	add_element(head, 69, 2);
}