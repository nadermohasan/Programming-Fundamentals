#include <iostream>
#include <string>
using namespace std;
string ReadString() {
    string text;
    cout << "Enter your String: ";
    getline(cin, text);
    return text;
}
string Replace(string text, string replaceFrom, string replaceTo) {
    short pos = 0;
    string delim = " ";
    string word = "";
    short TextToReplacePos = text.find(replaceFrom);
    // Nader Hasan Sulieman | Hasan -> Sulieman
    // Mohamed: index = 6
    for (int i = TextToReplacePos; i <= text.length(); i++) {
        if (text[i] != ' ')
            text.substr(i, text.find(" ")) = replaceTo;
            return text;
    }
}
int main()
{
    cout << Replace("Nader Hasan Sulieman", "Hasan", "Mohamed");
}
