#include <iostream>
using namespace std;

struct strInfo{
    string firstName;
    string lastName;
    string age;
    string phone;
};
void ReadInfo(strInfo &info){
    cout << "First Name: ";
    cin >> info.firstName;
    cout << "Last Name: ";
    cin >> info.lastName;
    cout << "Age: ";
    cin >> info.age;
    cout << "Phone: ";
    cin >> info.phone;
}
void PrintInfo(strInfo &info){
    cout << "Name: " << info.firstName << " " << info.lastName;
    cout << "\nAge: " << info.age << "\n";
    cout << "Phone: " << info.phone;
}
int main() {
    strInfo info;
    ReadInfo(info);
    PrintInfo(info);
    return 0;
}