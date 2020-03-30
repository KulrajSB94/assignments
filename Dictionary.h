#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct Node {
	// Your data structure goes here

};

class Dictionary
{
public:
	Dictionary();
	Dictionary(string file);
	void addWord(string word);
	bool isWord(string word);
	bool isPrefix(string word);
	int wordCount();

private:
	Node* root;
	int numWords;
	// Any private methods you need/want
};