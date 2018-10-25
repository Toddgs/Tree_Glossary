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
	void addNode(Term theTerm); //Adds a node.
	void addNode(Term theTerm, Node* node);
	void deleteNode(Node* node, string theKey); //Deletes a specified node
	//Traversals.
	virtual void levelOrder(Node* n);
	virtual void inorder(Node*);
	virtual void postorder(Node*);
	virtual void preorder(Node* node);
	virtual void preorder() { preorder(root); }
private:
	
	void freeNode(Node* node);
};