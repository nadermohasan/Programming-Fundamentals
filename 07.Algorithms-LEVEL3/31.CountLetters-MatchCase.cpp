#include <iostream>
#include <string>
using namespace std;
string ReadString() {
    cout << "Please, Enter a string? ";
    string text;
    getline(cin, text);
    return text;
}
char InvertCase(char letter) {
    return(isupper(letter) ? tolower(letter) : toupper(letter));
}
void CountLetters_MatchCase(string text) {
    char letter;
    short counter = 0;
    short counterForMatch = 0;
    cout << "Please Enter a character: ";
    cin >> letter;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == letter) {
            counter++;
        }
        else if (text[i] == InvertCase(letter)) {
            counterForMatch++;
        }
    }
    cout << "Letter " << "' " << letter << "'" << " Count = " << counter << endl;
    cout << "Letter " << "' " << letter << "'" << " Or " << "'" << InvertCase(letter) << "'" << " Count = " << counterForMatch + counter;
}
int main()
{
    CountLetters_MatchCase(ReadString());
}

