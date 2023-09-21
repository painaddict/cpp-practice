#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int store;
	struct Node * next_node; 
} node;

int main(void) {
	// create head node
	node* head = malloc(sizeof(node));
	node* element_1 = malloc(sizeof(node));
	
	// set next node
	head->next_node = element_1;
	head->store = 69;

	// set element_1 data
	//element_1->store = 169;
	element_1->next_node = NULL;

	printf("%d", element_1->store); // struct elements are initialized to zero
}