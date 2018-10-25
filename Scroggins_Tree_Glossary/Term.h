#pragma once
#include "Tree.h"
#include <string>

using namespace std;

#ifndef Term_H
#define Term_H

class Term : public Tree 
{

public:
	Term();
	Term(string word, string definition);

	string getWord() const;
	string getDefinition() const;
	void setWord(string word);
	void setDefinition(string definition);

	//Traversals with output for flash card functionality
	void levelOrder(Node* n);
	void inorder(Node*);
	void postorder(Node*);
	void preorder(Node* node);

private:
	string word;
	string definition;
};

#endif