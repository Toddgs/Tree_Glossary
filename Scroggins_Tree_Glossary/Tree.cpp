#include "Tree.h"
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
void Tree::freeNode(Node* leaf)
{
	if (leaf != NULL)
	{
		freeNode(leaf->left);
		freeNode(leaf->right);
		delete leaf;
	}
}

// Add a node.
void Tree::addNode(string theKey)
{
	// No elements. Add to the root position.
	if (isEmpty())
	{
		cout << "Add root node ... " << theKey << endl;
		Node* n = new Node();
		n->key = theKey;
		root = n;
	}
	else // Otherwise traverse to the correct position.
	{
		cout << "Add new node ... " << theKey << endl;
		addNode(theKey, root);
	}
}

// Add a node using recursion.
void Tree::addNode(string theKey, Node* leaf)
{

	if (theKey <= leaf->key) // If less, go left.
	{
		if (leaf->left != NULL)	// Keep searching recursively until empty node position.
		{
			addNode(theKey, leaf->left);
		}
		else							// Add node into empty correct position.
		{
			Node* n = new Node();
			n->key = theKey;
			leaf->left = n;
		}
	}
	else
	{
		if (leaf->right != NULL)	// Keep searching recursively until empty node position.
		{
			addNode(theKey, leaf->right);
		}
		else						// Add node into empty correct position.
		{
			Node* n = new Node();
			n->key = theKey;
			leaf->right = n;
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
		cout << v->key << endl;

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
		cout << node->key << endl;
		preorder(node->left);
		preorder(node->right);
	}
}

void Tree::inorder(Node* node)
{
	if (node != NULL)
	{
		inorder(node->left);
		cout << node->key << endl;
		inorder(node->right);
	}
}

void Tree::postorder(Node* node)
{
	if (node != NULL)
	{
		postorder(node->left);
		postorder(node->right);
		cout << node->key << endl;
	}
}