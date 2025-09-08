#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadString() {
    string text;
    cout << "Please Enter Your String: ";
    getline(cin, text);
    return text;
}
vector<string> SplitString(string text, string delim) {
    vector<string> words;
    string word = "";
    short pos = 0;
    /*
    * It is what the .find() method returns when it fails to find the substring you asked for.
      Think of it as find()'s way of saying "Not Found."
    */
    while ((pos = text.find(delim)) != string::npos) {
        word = text.substr(0, pos);
        if (word != "")
            words.push_back(word);
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        words.push_back(text);
    return words;
}
int main()
{
    vector<string> words = SplitString(ReadString(), " ");
    for (string& word : words) {
        cout << word << "   ";
    }
}