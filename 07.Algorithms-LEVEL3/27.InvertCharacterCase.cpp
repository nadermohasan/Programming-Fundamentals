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
int main()
{
    cout << InvertCase(ReadLetter());
}

