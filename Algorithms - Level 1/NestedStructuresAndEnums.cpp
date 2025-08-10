#include <iostream>
#include <string>
using namespace std;
enum enGender {Male, Female};
enum enStatus {Single, Married};

struct stAddress{
    string POBox;
    string zipCode;
    string streetName;
};
struct stContactInfo{
    string email;
    string phone;
    stAddress address;
};
struct stPerson{
    string firstName;
    string lastName;
    stContactInfo contactInfo;
    enGender gender;
    enStatus status;
};
void getGender(enGender gender){
    switch (gender){
        case enGender::Male : 
        cout << "Male" << endl;
        break;
        
        case enGender::Female :
        cout << "Female" << endl;
        break;
    }
}
void getStatus(enStatus status){
    switch(status){
        case enStatus::Single :
        cout << "Single" << endl;
        break;
        
        case enStatus::Married :
        cout << "Married" << endl;
        break;
    }
}
int main() {
    stPerson person;
    person.firstName = "Nader";
    person.lastName = "Sulieman";
    person.gender = enGender::Male;
    person.status = enStatus::Single;
    person.contactInfo.email = "nadermohasan@gmail.com";
    person.contactInfo.phone = "0599884008";
    person.contactInfo.address.POBox = "777";
    person.contactInfo.address.zipCode = "970";
    person.contactInfo.address.streetName = "Beach";
    cout << person.firstName << endl;
    cout << person.lastName << endl;
    getGender(person.gender);
    getStatus(person.status);
    cout << person.contactInfo.email << endl;
    cout << person.contactInfo.phone << endl;
    cout << person.contactInfo.address.POBox << endl;
    cout << person.contactInfo.address.zipCode << endl;
    cout << person.contactInfo.address.streetName << endl;
    string fullName;
    string ID;
    cout << "ID: ";
    cin >> ID;
    cin.ignore(1, '\n');
    cout << "\nFull Name: ";
    getline(cin, fullName);
    cout << "\n" << fullName[4];
    int age;
    cin >> age;
    cout << "\n" << age;
    return 0;
}