#pragma once
#include "Tree.h"
#include "Term.h"

class Node
{
public: 
	Term term;
	Node* left;
	Node* right;
};
