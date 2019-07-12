#include <iostream>
#include <vector>
class MinHeap {
	int size;
	std::vector<int> heap;
	public:
	MinHeap() {
		size = 0;
	}
	void enqueue(int value) {
		// place at bottom
		heap[++size] = value;
		// bubbleUp();
	}
	int dequeue() {
		if(isEmpty()) {
			throw std::runtime_error("empty queue");
		}
		int result = peek();
	}
	int peek() {
		if(isEmpty()) {
			throw std::runtime_error("empty queue");
		}
		return heap[0];
	}


	bool isEmpty() {
		return size == 0;
	}


};

int main() {
	MinHeap h;
	h.peek();
	return 0;
}
