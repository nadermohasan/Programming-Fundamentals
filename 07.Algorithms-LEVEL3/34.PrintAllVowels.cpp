#include <iostream>
#include <string>
using namespace std;
string ReadString() {
    string text;
    cout << "Please Enter Your String: ";
    getline(cin, text);
    return text;
}

bool isVowel(char letter) {
    tolower(letter);
    return ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u'));
}
void GetAllVowels(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (isVowel(text[i]))
            cout << text[i] << "    ";
    }
}
int main()
{
    GetAllVowels(ReadString());
    return 0;
}

