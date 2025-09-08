#include <iostream>
#include <string>
using namespace std;
char ReadChar() {
    char letter;
    cout << "Please Enter a character: ";
    cin >> letter;
    return letter;
}
bool isVowel(char letter) {
    return ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u'));
}
int main()
{
    char letter = ReadChar();
    if (isVowel(letter)) {
        cout << "Yes, Letter " << letter << " is vowel";
    }
    else {
        cout << "No, Letter " << letter << " is not a vowel";
    }
}

