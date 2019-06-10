#include "Stack.h"
#include <iostream>

Node::Node(int data) {
	this->data = data;
}


Stack::Stack() {
	top = nullptr;
	size = 0;
}
	
int Stack::push(int n) {
	Node *newNode = new Node(n);
	newNode->next = top;
	top = newNode;
	++this->size;
	return n;
}
int Stack::pop() {
	int dat = top->data;
	top = top->next;
	--this->size;
	return dat;
}
int Stack::peek() {
	return top->data;
}

bool Stack::isEmpty() {
	return top == nullptr;
}

void Stack::print() {
	if(top == nullptr) {
		std::cout << "empty\n";
		std::cout << "\n";
		return;
	}   
	else {
		Node *temp = top;
		while(true) {
			if(temp -> next == nullptr) {
				std::cout << temp->data << " ";
				std::cout << "\n";
				return;
			}   
			else {
				std::cout << temp-> data << " ";
				temp = temp -> next;
			}   

		}   
	}   

}   

