#include <iostream>
#include <cctype>
#include <string>
using namespace std;
char ReadLetter() {
    char letter;
    cout << "Enter a characrer: ";
    cin >> letter;
    return letter;
}
char InvertCase(char letter) {
    return isupper(letter) ? tolower(letter) : toupper(letter);
}
string InvertAllLetterCase(string text) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = InvertCase(text[i]);
    }
    return text;
}
int main()
{
    cout << InvertAllLetterCase("nader ABU-SULIMAN");
}

