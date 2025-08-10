#include <iostream>
#include <string>
using namespace std;

enum enWeak {Saturday=1, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};

void ShowMenu() {
    cout << "***************" << endl;
    cout << "1. Saturday" << endl;
    cout << "2. Sunday" << endl;
    cout << "3. Monday" << endl;
    cout << "4. Tuesday" << endl;
    cout << "5. Wednesday" << endl;
    cout << "6. Thursday" << endl;
    cout << "7. Friday" << endl;
    cout << "***************" << endl;
    cout << "Choose a Day Number: ";
}

enWeak ReadNumber() {
    int number;
    cin >> number;
    return enWeak(number);
}

string enumToDayName(enWeak weak){
    switch(weak){
        case enWeak::Saturday:
        return "Saturday";
        case enWeak::Sunday: 
        return "Sunday";
        case enWeak::Monday: 
        return "Monday";
        case enWeak::Tuesday: 
        return "Tuesday";
        case enWeak::Wednesday: 
        return "Wednesday";
        case enWeak::Thursday: 
        return "Thursday";
        case enWeak::Friday: 
        return "Friday";
        default: 
        return "Invalid Day";
    }
}

int main(){
    ShowMenu();
    cout << "Today is: " << enumToDayName(ReadNumber()) << endl;
    return 0;
}