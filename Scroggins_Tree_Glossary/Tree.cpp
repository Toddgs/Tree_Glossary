#include "pch.h"
#include "Tree.h"
#include "Node.h"
#include <string>
#include <iostream>
#include <queue>


using namespace std;

// Constructor
Tree::Tree()
{
	root = NULL;
}

// Destructor.
Tree::~Tree()
{
	freeNode(root);
}

// Free the node.
// What kind of traversal is this? Post-order.
void Tree::freeNode(Node* theNode)
{
	if (theNode != NULL)
	{
		freeNode(theNode->left);
		freeNode(theNode->right);
		delete theNode;
	}
}

// Add a node.
void Tree::addNode(Term theTerm)
{
	// No elements. Add to the root position.
	if (isEmpty())
	{
		cout << "Add root node ... " << &theTerm << endl;
		Node* n = new Node();
		n->term = theTerm;
		root = n;
	}
	else // Otherwise traverse to the correct position.
	{
		cout << "Add new node ... " << &theTerm << endl;
		addNode(theTerm, root);
	}
}

// Add a node using recursion.
void Tree::addNode(Term theTerm, Node* node)
{

	if (&theTerm <= &node->term) // If less, go left.
	{
		if (node->left != NULL)	// Keep searching recursively until empty node position.
		{
			addNode(theTerm, node->left);
		}
		else							// Add node into empty correct position.
		{
			Node* n = new Node();
			n->term = theTerm;
			node->left = n;
		}
	}
	else
	{
		if (node->right != NULL)	// Keep searching recursively until empty node position.
		{
			addNode(theTerm, node->right);
		}
		else						// Add node into empty correct position.
		{
			Node* n = new Node();
			n->term = theTerm;
			node->right = n;
		}
	}
}

// Print the tree level-order assisted by queue
void Tree::levelOrder(Node* n)
{
	// Create a queue
	queue<Node*> q;

	// Push the root
	q.push(n);

	while (!q.empty())
	{
		// Dequeue a node from front
		Node* v = q.front();
		cout << &v->term << endl;

		// Enqueue the left children
		if (v->left != NULL)
		{
			q.push(v->left);
		}

		// Enqueue the right children
		if (v->right != NULL)
		{
			q.push(v->right);
		}

		// Pop the visited node
		q.pop();
	}
}

void Tree::preorder(Node* node)
{
	if (node)
	{
		cout << &node->term << endl;
		preorder(node->left);
		preorder(node->right);
	}
}

void Tree::inorder(Node* node)
{
	if (node != NULL)
	{
		inorder(node->left);
		cout << &node->term << endl;
		inorder(node->right);
	}
}

void Tree::postorder(Node* node)
{
	if (node != NULL)
	{
		postorder(node->left);
		postorder(node->right);
		cout << &node->term << endl;
	}
}