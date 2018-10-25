#include "Node.h"

class Tree
{
	Node* root;
	friend class Term;
public:
	Tree(); //Default Constructor
	~Tree(); //Desctructor
	//Basic public tree operations
	Node* getRoot() { return root; }; //Returns the root
	bool isEmpty() { return (root == NULL); }
	void addNode(string theKey); //Adds a node.
	void deleteNode(Node* node, string theKey); //Deletes a specified node
	//Traversals.
	virtual void levelOrder(Node* n);
	virtual void inorder(Node*);
	virtual void postorder(Node*);
	virtual void preorder(Node* node);
	virtual void preorder() { preorder(root); }
private:
	void addNode(string theKey, Node* node);
	void freeNode(Node* node);
};