#pragma once
#define MAX 100


// define the "entity" known as stack
typedef struct Stack {
	int data[MAX];
	int top_pos; 

	Stack() {
		top_pos = -1;
	}
} stack;


