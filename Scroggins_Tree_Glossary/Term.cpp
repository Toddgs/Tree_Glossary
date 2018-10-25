
#include "pch.h"

#include <string>
#include <iostream>
#include <queue>
#include "Term.h"


//using namespace std;

Term::Term()
{
	setWord("");
	setDefinition("");
}

Term::Term(string word, string definition)
{
	setWord(word);
	setDefinition(definition);
}

string Term::getWord() const
{
	return word;
}

string Term::getDefinition() const
{
	return definition;
}

void Term::setWord(string theWord)
{
	word = theWord;
}

void Term::setDefinition(string theDefinition)
{
	definition = theDefinition;
}

/*
// Print the tree level-order assisted by queue
void Term::levelOrder(Node* node)
{
	//FIXME: COUT the stuff needed, inheritance should do it's magic
}

void Term::preorder(Node* node)
{
	//FIXME: COUT the stuff needed, inheritance should do it's magic
}

void Term::inorder(Node* node)
{
	//FIXME: COUT the stuff needed, inheritance should do it's magic
}

void Term::postorder(Node* node)
{
	//FIXME: COUT the stuff needed, inheritance should do it's magic
}
*/