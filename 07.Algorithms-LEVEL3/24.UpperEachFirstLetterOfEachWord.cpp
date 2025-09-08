// 23.PrintFirstLetterOfEachWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string UpperEachFirstLetterOfEachWord(string text) {
	bool isFirstLetter = true;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] != ' ' && isFirstLetter) {
			text[i] = toupper(text[i]);
		}
		// NOW, if isFirstLetter = true, that means we now in a space..
		// and the new index will be the first letter of a new word;
		isFirstLetter = (text[i] == ' ' ? true : false);
	}
	return text;
}
int main()
{
	cout << UpperEachFirstLetterOfEachWord("nader mohamed abu-sulieman");
	return 0;
}

