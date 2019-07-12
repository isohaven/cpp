#include "Node.h"
Node::Node(int v) {
	value = priority = v;
}
Node::Node(int v, int p) {
	value = v;
	priority = p;
}

