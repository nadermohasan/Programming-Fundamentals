#include <iostream>
#include <cctype>
using namespace std;

bool isPanctuation(char letter) {
    return (((int)letter >= 33 && (int)letter <= 47) || ((int)letter >= 58 && (int)letter <= 64)
        || ((int)letter >= 91 && (int)letter <= 96) || ((int)letter >= 123 && (int)letter <= 126));
}
string RemovePanctuations(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (ispunct(text[i])) {
            text.erase(i, 1); // delete 1 character, starting from index number i;
            i--;
        }
    }
    return text;
}
int main()
{
    cout << RemovePanctuations("Hello, World!");
}

