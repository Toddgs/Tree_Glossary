// Scroggins_Tree_Glossary.cpp : 
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "Term.h"
#include "Tree.h"

using namespace std;

//Standard functions declared
int displayMenu() {
	int choice = 0;
	
	cout << "SELECT AN OPTION OR FACE IMMINENT DOOM\n";
	cout << "Please make a selection:\n";
	cout << "1: Add a term and it's meaning.\n";
	cout << "2: Edit a term.\n";
	cout << "3: Find and display a term.\n";
	cout << "4: View all the terms in a list.\n";
	cout << "5: Show flashcards.\n";
	cout << "6: Delete a term.\n";
	cout << "7: Search for text within a term or it's definition.";
	cout << "8: Exit the program.\n";

	cin >> choice;
	return choice;
}

void readTerms() {
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
		Tree addNode(Term theTerm);
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
void addTerm() {

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
	int userChoice;
	bool theMeaningOfLife = true;
	//Display menu and get user input
	
	while(theMeaningOfLife)
	{
		userChoice = displayMenu();
		//switch statement 
		switch (userChoice)
		{
			case 1:
				addTerm();
			case 2:
				editTerm();
			case 3:
				findTerm();
			case 4:
				viewAllTerms();
			case 5:
				flashCard();
			case 6:
				deleteTerm();
			case 7:
				textSearch();
			case 8:
				exit();
				theMeaningOfLife = false;
			default:
				break;
	}
}

