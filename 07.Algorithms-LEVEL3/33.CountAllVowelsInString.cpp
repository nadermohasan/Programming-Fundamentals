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
    return ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u') ||
        (letter == 'A') || (letter == 'E') || (letter == 'I') || (letter == 'O') || (letter == 'U'));
}
int VowelsCounter(string text) {
    short vowelsCounter = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isVowel(text[i]))
            vowelsCounter++;
    }
    return vowelsCounter;
}
int main()
{
    cout << VowelsCounter(ReadString());
    return 0;
}

