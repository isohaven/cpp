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
		int par = parent(i);

		// bubble up
		while(par != i && heap[i] < heap[par]) {
			swap(i, par);
			i = par;
			par = parent(i);
		}
	}
	int dequeue() {
		if(isEmpty()) {
			throw std::runtime_error("empty queue");
		}
		else if (heap.size() == 1) {
			int min = heap[0];
			heap.erase(heap.begin());
			return min;
		}
		else {
			int min = heap[0];
			int lastVal = heap.back();
			heap.insert(heap.begin(), lastVal);
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
		return heap.size() <= 0;
	}
	void print() {
		for(auto i : heap) {
			std::cout << i << ' ';
		}
	}
	
	private:

	void swap(int a, int b) {
		int temp = heap[b];
		heap.insert(heap.begin() +b, heap[a]);
		heap.insert(heap.begin() +a, temp);
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
	h.enqueue(3);
	h.enqueue(6);
	h.enqueue(9);
	h.print();
	
	return 0;
}
