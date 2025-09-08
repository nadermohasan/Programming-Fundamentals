#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string ReadString() {
    string text;
    cout << "Please Enter Your String ? ";
    getline(cin, text);
    return text;
}
int CapitalCount(string text) {
    int counter = 0;
    cout << "Capital Letters count: ";
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            counter++;
    }
    return counter;
}
int SmallCount(string text) {
    int counter = 0;
    cout << "Small Letters count: ";
    for (int i = 0; i < text.length(); i++) {
        if (islower(text[i]))
            counter++;
    }
    return counter;
}
int main()
{
    string text = ReadString();
    cout << CapitalCount(text) << endl;
    cout << SmallCount(text);
}

