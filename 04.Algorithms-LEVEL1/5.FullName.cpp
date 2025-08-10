#include <iostream>
using namespace std;

struct strName{
    string FirstName;
    string LastName;
};
strName ReadName(){
    strName name;
    cout << "First Name: ";
    cin >> name.FirstName;
    cout << "Last Name: ";
    cin >> name.LastName;
    return name;
}
string FullName(strName name){
    return name.FirstName + " " + name.LastName;
}
int main() {
    cout << FullName(ReadName());
    return 0;
}