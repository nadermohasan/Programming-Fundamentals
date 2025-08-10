#include <iostream>
using namespace std;
struct stPerson{
    string FirstName;
    string LastName;
    string Age;
    string Phone;
};
void ReadInfo(stPerson &info){
    cout << "First Name: ";
    cin >> info.FirstName;
    cout << "Last Name: ";
    cin >> info.LastName;
    cout << "Age: ";
    cin >> info.Age;
    cout << "Phone: ";
    cin >> info.Phone;
}
void PrintInfo(stPerson info){
    cout << "Name: " << info.FirstName << " " << info.LastName;
    cout << "\nAge: " << info.Age << "\n";
    cout << "Phone: " << info.Phone;
}
int main() {
    stPerson Person[2];
    ReadInfo(Person[0]);
    cout << "**************";
    ReadInfo(Person[1]);
    cout << "**************";
    PrintInfo(Person[0]);
    return 0;
}