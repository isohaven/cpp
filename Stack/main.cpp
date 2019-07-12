#include "Stack.h"
#include <iostream>
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
}
