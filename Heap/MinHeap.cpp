#include <iostream>
#include <vector>
class MinHeap {
	std::vector<int> heap;
	public:
	MinHeap() {
	}
	void enqueue(int value) {
		// bubbleUp();
	}
	int dequeue() {
		if(isEmpty()) {
			throw std::runtime_error("empty queue");
		}
		else if (list.size() == 1) {
			int val = heap[0];
			a.erase(a.begin());
			return val;
		}
	}
	int peek() {
		if(isEmpty()) {
			throw std::runtime_error("empty queue");
		}
		return heap[0];
	}


	bool isEmpty() {
		return heap.size <= 0;
	}


};

int main() {
	MinHeap h;
	h.peek();
	return 0;
}
