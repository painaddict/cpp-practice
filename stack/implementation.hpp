#pragma once
#define MAX 100

// define the "entity" known as stack
typedef struct Stack {
	int data[MAX]{};
	int top_pos; 

	Stack() {
		top_pos = -1;
	}
} stack;

stack* create_stack();

int is_empty(stack* s);

int is_full(stack* s);

int push(stack* s, int element);

int pop(stack* s);

void print_stack(stack* s);
