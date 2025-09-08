#include <iostream>
#include <string>
using namespace std;
string ReadString() {
    cout << "Please Enter a String: ";
    string text;
    getline(cin, text);
    return text;
}
void PrintEachWord(string text) {
    // Nader Mohamed
    string delim = " ";
    short pos = 0; // Or text.find(" "); without the declaration of variable delim;
    string word = "";
    while ((pos = text.find(delim)) != string::npos) {
        word = text.substr(0, pos);
        if (word != "") {
            // to avoid to print empty words or spaces
            cout << word << endl;
        }
        text.erase(0, pos + delim.length()); // Or text.erase(0, pos + 1); erase(), substr() is execlude functions
    }
    if (text != "") {
        cout << text;
    }
}
int main()
{
    PrintEachWord("Nader Mohamed");
    cout << "\n_______" << endl;
    string text = "";
    cout << text.substr(0, 1);
    bool te = text.empty();
    cout << te;
    return 0;
}

