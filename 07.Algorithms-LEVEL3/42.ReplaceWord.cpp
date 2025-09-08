#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReplaceString(string text, string replaceFrom, string replaceTo) {
    // Nader Hasan Sulieman
    short pos = text.find(replaceFrom);
    while (pos != string::npos) {
        text.replace(pos, replaceFrom.length(), replaceTo);
        pos = text.find(replaceFrom);
    }
    return text;
}
int main()
{
    cout << ReplaceString("Nader Hasan Sulieman", "Hasan", "Mohamed");
}