#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString() {
	string text;
	cout << "Enter your String: ";
	getline(cin, text);
	return text;
}
vector<string> SplitString(string text, string delim) {
	// Nader Mohamed Hasan
	// vect = [Nader, Mohamed, Nader]
	short pos = 0;
	string word;
	vector<string> vect;
	while ((pos = text.find(delim)) != string::npos) {
		word = text.substr(0, pos);
		if (word != "")
			vect.push_back(word);
		text.erase(0, pos + delim.length());
	}
	if (text != "")
		vect.push_back(text);
	return vect;
}
string ReverseString(string text) {
	vector<string> vect = SplitString(text, " ");
	string revesedString = "";
	for (int i = vect.size() -1; i >= 0; i--) {
		revesedString += vect[i];
		if (i <= vect.size() - 1)
			revesedString += " ";
	}
	return revesedString;
}
int main()
{
	cout << ReverseString("Nader Mohamed Sulieman");
}

