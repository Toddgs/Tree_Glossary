#pragma once
#include "Tree.h"

class Term : public Tree {


public:



	//Traversals with output for flash card functionality
	void levelOrder(Node* n);
	void inorder(Node*);
	void postorder(Node*);
	void preorder(Node* node);
};