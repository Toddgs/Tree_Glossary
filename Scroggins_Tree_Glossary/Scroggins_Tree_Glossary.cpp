// Scroggins_Tree_Glossary.cpp : 
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include "Term.h"
#include "Tree.h"

using namespace std;

//Standard functions declared
/*
int displayMenu() {
	
	cin.ignore(1, '\n');
	return choice;
}
*/

void pressAnyKey()
{
	cout << "\nPress any key to continue" << endl << endl;
	_getch();
}
void readTerms(Tree theTree) {
	ifstream termsFile("Terms.txt", ios::in);
	//termsFile.open("Terms.txt");
	string theWord, theDefinition;
	if (!termsFile)
	{
		cerr << "Incorrect file type!" << endl;
		exit(1);
	}
	
	while (!termsFile.eof())
	{
		getline(termsFile, theWord, '\t');
		getline(termsFile, theDefinition, '\t');
		Term theTerm(theWord, theDefinition);
		theTree.addNode(theTerm);
	}
}

void readTermsCSV() {
	ofstream termsFile;
	termsFile.open("Terms.csv");
	string line;
	while (true)
	{
		getline(cin, line, ',');
	}
}

void writeTerms() {

}
//Menu functions declared
void addTerm(string theWord, string theDefinition, Tree theTree) {
	Term tempTerm(theWord, theDefinition);
	theTree.addNode(tempTerm);
	cout << "Adding term...";
}

void editTerm() {

}

void findTerm() {

}

void viewAllTerms() {

}

//FIXME: May not be needed
void flashCard() {

}

void deleteTerm() {

}

void textSearch() {

}

void exit() {

}

int main()
{
	//Declare variables
	//int userChoice;
	string tempWord, tempDefinition;
	bool theMeaningOfLife = true;
	//Display menu and get user input
	Tree theTree;
	readTerms(theTree);
	int userChoice;

	while (theMeaningOfLife)
	{
		
		string stuff;
		cout << "SELECT AN OPTION OR FACE IMMINENT DOOM\n";
		cout << "Please make a selection:\n";
		cout << "1: Add a term and it's meaning.\n";
		cout << "2: Edit a term.\n";
		cout << "3: Find and display a term.\n";
		cout << "4: View all the terms in a list.\n";
		cout << "5: Show flashcards.\n";
		cout << "6: Delete a term.\n";
		cout << "7: Search for text within a term or it's definition.\n";
		cout << "8: Exit the program.\n";
		cout << "Please enter a selection: ";
		
		//cin.clear();
		cin >> userChoice;
		if (!cin)
		{
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
		}
		
		
		cout << endl;
		
		//switch statement 
		switch (userChoice)
		{
		case 1:
		{
			//Term tempTerm;
			
			cout << "Please enter a term: " << endl;
			getline(cin, tempWord);
			cout << "\nPlease enter the definition: " << endl;
			getline(cin, tempDefinition);
			//Term tempTerm(tempWord, tempDefinition);
			addTerm(tempWord, tempDefinition, theTree);
			pressAnyKey();
			break;
		}
		case 2:
		{
			//editTerm();
			pressAnyKey();
			break;
		}
		case 3:
		{
			//findTerm();
			pressAnyKey();
			break;
		}
		case 4:
		{
			//viewAllTerms();
			pressAnyKey();
			break;
		}
		case 5:
		{
			//flashCard();
			pressAnyKey();
			break;
		}
		case 6:
		{
			//deleteTerm();
			pressAnyKey();
			break;
		}
		case 7:
		{
			//textSearch();
			pressAnyKey();
			break;
		}
		case 8:
		{
			exit();
			theMeaningOfLife = false;
			break;
		}
		default:
		{
			cin.clear();

			break;
		}
		}
		//userChoice = NULL;
	}
}

