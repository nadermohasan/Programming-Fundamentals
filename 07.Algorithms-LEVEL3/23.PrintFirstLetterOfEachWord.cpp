// 23.PrintFirstLetterOfEachWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void PrintFirstLetterOfEachWord(string text) {
	bool isFirstLetter = true;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] != ' ' && isFirstLetter) {
			cout << text[i] << endl;
		}
		// NOW, if isFirstLetter = true, that means we now in a space..
		// and the new index will be the first letter of a new word;
		isFirstLetter = (text[i] == ' ' ? true : false);
	}
}
int main()
{
	PrintFirstLetterOfEachWord("     Nader Mohamed Abu-Sulieman");
	return 0;
}

