#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
struct sClients {
    string Name, AccountNumber, PINCode, Phone;
    int AccountBalance = 0;
};
sClients ReadClient() {
    sClients client;
    cout << "Please, Enter the client Data..." << endl;
    cout << "Account Number: ";
    getline(cin, client.AccountNumber);
    cout << "PIN Code: ";
    getline(cin, client.PINCode);
    cout << "Name: ";
    getline(cin, client.Name);
    cout << "Phone Number:";
    getline(cin, client.Phone);
    cout << "Account Balance: ";
    cin >> client.AccountBalance;
    return client;
}
string GetRecord(sClients client, string separator = "::") {
    string ClientRecord = "";
    ClientRecord += client.AccountNumber + separator;
    ClientRecord += client.PINCode + separator;
    ClientRecord += client.Name + separator;
    ClientRecord += client.Phone + separator;
    ClientRecord += to_string(client.AccountBalance);
    return ClientRecord;
}
void SaveRecordAsFile(sClients client, string filename) {
    fstream File;
    string delim = "::";
    File.open(filename, ios::app); // append mode (Not Write) for save old data;
    if (File.is_open()) {
        File << endl;
        File << client.AccountNumber << delim;
        File << client.PINCode << delim;
        File << client.Name << delim;
        File << client.Phone << delim;
        File << client.AccountBalance;
    }
    File.close();
    cout << "Client Record for saving is: " << endl;
    cout << GetRecord(client);
}
int main()
{
    sClients client = ReadClient();
    SaveRecordAsFile(client, "Clients.txt");
}
