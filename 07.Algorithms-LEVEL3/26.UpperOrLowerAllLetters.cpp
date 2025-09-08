// 23.PrintFirstLetterOfEachWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string ToUpper(string text) {
	for (int i = 0; i < text.length(); i++) {
		text[i] = toupper(text[i]);
	}
	return text;
}
string ToLower(string text) {
	for (int i = 0; i < text.length(); i++) {
		text[i] = tolower(text[i]);
	}
	return text;
}
int main()
{
	cout << ToUpper("nader mohaemd") << endl;
	cout << ToLower("NaDer MoHAMed");
	return 0;
}

