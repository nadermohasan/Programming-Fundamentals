#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct sClients {
    string Name, AccountNumber, PINCode, Phone;
    int AccountBalance = 0;
};

vector<string> Split(string text) {
    size_t pos = 0;
    string delim = " | ";
    string word = "";
    vector<string> vString;

    while ((pos = text.find(delim)) != string::npos) {
        word = text.substr(0, pos);
        if (!word.empty())
            vString.push_back(word);

        // ✅ erase from beginning up to end of delimiter
        text.erase(0, pos + delim.length());
    }

    if (!text.empty())
        vString.push_back(text);

    return vString;
}

vector<sClients> LoadClientsFromFile(string filename) {
    fstream File;
    vector<sClients> vClients;
    string Line;

    File.open(filename, ios::in);

    if (File.is_open()) {
        while (getline(File, Line)) {
            cout << "Line Records are: " << endl;
            cout << Line << endl;

            vector<string> vString = Split(Line);

            if (vString.size() == 5) {
                sClients Client;
                Client.AccountNumber = vString[0];
                Client.PINCode = vString[1];
                Client.Name = vString[2];
                Client.Phone = vString[3];
                Client.AccountBalance = stoi(vString[4]);

                vClients.push_back(Client);
            }
        }
        File.close();
    }
    return vClients;
}

void GetClient(sClients Client) {
    cout << "\nThe following is the extracted client: " << endl;
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "PIN Code       : " << Client.PINCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;
}

int main() {
    vector<sClients> Clients = LoadClientsFromFile("Clients.txt");

    for (sClients& Client : Clients) {
        GetClient(Client);
    }
}
