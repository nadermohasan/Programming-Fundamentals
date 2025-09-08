#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string ReadString() {
    string text;
    cout << "Please Enter a String ? ";
    getline(cin, text);
    return text;
}
int LetterCount(string text) {
    char character;
    int counter = 0;
    cout << "Please Enter a Character ? ";
    cin >> character;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == character)
            counter++;
    }
    return counter;
}
int main()
{
    cout << LetterCount(ReadString());
}

