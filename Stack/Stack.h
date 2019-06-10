#ifndef STACK_H
#define STACK_H

#include <iostream>
struct Node {
	int data;
	struct Node *next = nullptr;
	Node(int data);
};

class Stack {
	private:
	Node *top;
	int size;
	public:
	Stack();
	int push(int n);
	int pop();
	int peek();
	bool isEmpty();
	void print();

};
#endif
