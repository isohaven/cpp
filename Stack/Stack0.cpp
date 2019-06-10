#include "Stack.h"
#include <iostream>

struct Node {
	int data;
	struct Node *next = nullptr;
	Node(int data) {
		this->data = data;
	}
};

class Stack {
	private:
	Node *top;
	int size;

	public:
	Stack() {
		top = nullptr;
		size = 0;
	}
	
	int push(int n) {
		Node *newNode = new Node(n);
		newNode->next = top;
		top = newNode;
		++this->size;
		return n;
	}
	int pop() {
		int dat = top->data;
		top = top->next;
		--this->size;
		return dat;
	}
	int peek() {
		return top->data;
	}

	bool isEmpty() {
		return top == nullptr;
	}

	void print() {
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



};

int main() {
	Stack s;
	std::cout << s.isEmpty() << "\n";
	s.push(4); s.push(6); s.push(3); s.push(7);
	s.print();
	std::cout << s.pop() << "\n";
	std::cout << s.peek() << "\n";
	std::cout << s.pop() << "\n";
	std::cout << s.peek() << "\n";
	
	s.push(20); s.push(12); s.push(6);
    s.pop(); s.pop(); s.pop();
	std::cout << s.isEmpty() << "\n";




	
	return 0;
}
