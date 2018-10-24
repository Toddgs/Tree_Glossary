#include <string>

class Node
{
	string key;
	Node* left;
	Node* right;
	friend class Tree;
public:
	Node() { key = "-1"; left = NULL; right = NULL; };
};
