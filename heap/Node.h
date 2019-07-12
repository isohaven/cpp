#ifndef Node_H
#define Node_H

struct Node {
	int value;
	int priority;
	Node(int v);
	Node(int v, int p);
};
#endif
