#include <iostream>
#include <vector>
class MinHeap {
	std::vector<int> heap;
	public:
	MinHeap() {
	}
	void enqueue(int value) {
		heap.push_back(value);
		int i = heap.size() -1;
		int parent = parent(i);

		// bubble up
		while(parent != i && list[i] < list[parent]) {
			swap(i, parent);
			i = parent;
			parent = parent(i);
		}
	}
	int dequeue() {
		if(isEmpty()) {
			throw std::runtime_error("empty queue");
		}
		else if (list.size() == 1) {
			int min = heap[0];
			a.erase(a.begin());
			return min;
		}
		else {
			int min = heap[0];
			int lastVal = heap.back();
			heap.insert(0, lastVal);
			heap.pop_back();
			// bubbledown
			return min;
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
	
	private:

	void swap(int a, int b) {
		int temp = list[b];
		heap.insert(b, heap[a]);
		heap.insert(a. temp):
	}
	int parent(int i) {
		return (i-1) / 2;
	}
	int left(int i) {
		return 2*i + 1;
	}
	int right(int i) {
		return 2*i + 2;
	}


};

int main() {
	MinHeap h;
	h.peek();
	return 0;
}
