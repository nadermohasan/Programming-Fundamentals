#include <iostream>
#include <string>
using namespace std;
string ReadString() {
    string text;
    cout << "Please Enter your String: ";
    getline(cin, text);
    return text;
}
int CountEachWordInString(string text) {
    // Nader Mohamed Hasan;
    short pos = 0;
    string delim = " ";
    string word = "";
    short counter = 0;
    while ((pos = text.find(delim)) != string::npos) {
        word = text.substr(0, pos);
        if (word != "")
            counter++;
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        counter++;
    return counter;
}

int WordsCounter(string text) {
    string delim = " ";
    string word = "";
    short counter = 0;
    short pos = 0;
    while ((pos = text.find(delim)) != string::npos) {
        word = text.substr(0, pos);
        if (word != "")
            counter++;
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        counter++;
    return counter;
}
int main()
{
    cout << "Words Counter: " << CountEachWordInString(ReadString());
}

