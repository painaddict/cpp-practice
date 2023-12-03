#pragma once

typedef struct Node {
	int store;
	struct Node * next_node;

	Node() {
		next_node = NULL; // define default
	}
} node;

// doubly linked list

typedef struct Node2 {
    int store;
    struct Node2 * left;
    struct Node2 * right;

    Node2() {
        left = NULL;
        right = NULL;
    }
} node_double;
