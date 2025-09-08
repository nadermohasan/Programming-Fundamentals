#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string ReadString() {
    string text;
    cout << "Please Enter your String: ";
    cin >> text;
    return text;
}
string TrimLeft(string text) {
    // ___Nader_Mohamed___
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ')
            return text.substr(i, text.length() - i);
    }
    return "";
}
string TrimRight(string text) {
    //___Nader Mohamed___
    // length = 19;
    // last letter index; i = 15
    for (int i = text.length()-1; i >= 0; i--) {
        if (text[i] != ' ')
            return text.substr(0, i + 1);
    }
    return "";
}
string Trim(string text) {
    return TrimLeft(TrimRight(text));
}
int main()
{
    cout << "   Nader Mohamed   " << endl;
    cout << TrimRight("   Nader Mohamed   ") << endl;
    cout << TrimLeft("   Nader Mohamed    ") << endl;
    cout << Trim("   Nader Mohamed   ") << endl;
    return 0;
}
