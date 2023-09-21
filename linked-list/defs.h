#pragma once

typedef struct Node {
	int store;
	struct Node * next_node;

	Node() {
		next_node = NULL; // define default
	}
} node;
