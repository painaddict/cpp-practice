#include <iostream>
#include "defs.h"

int main(void) {
	// create nodes
	node* head = new node();
	node* element_1 = new node();

	head->next_node = element_1;
	head->store = 69;

	std::cout << element_1->next_node << std::endl; // 0 (null)

    // create node_doubles
    node_double * double_head = new node_double();
    node_double * one = new node_double();
    node_double * two = new node_double();

    double_head->left = NULL;
    double_head->right = one;

    one->left = double_head;
    one->right = two;

    two->left = one;
    two->right = NULL;

    // set data

    one->store = 69;
    two->store = 70;

    std::cout << double_head->right->right->store;
}