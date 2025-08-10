#include <iostream>
using namespace std;
enum enWeekDay{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int Number() {
    int Number;
    cout << "Number: ";
    cin >> Number;
    return Number;
}
enWeekDay WeekDayNumber (int Number){
    if(Number == 0)
    return enWeekDay::Sunday;
    if(Number == 1)
    return enWeekDay::Monday;
    if(Number == 2)
    return enWeekDay::Tuesday;
    if(Number == 3)
    return enWeekDay::Wednesday;
    if(Number == 4)
    return enWeekDay::Thursday;
    if(Number == 5)
    return enWeekDay::Friday;
    if(Number == 6)
    return enWeekDay::Saturday;
}
void WeekDay(enWeekDay WeekDay){
    switch(WeekDay){
        case enWeekDay::Sunday:
        cout << "It's Sunday!";
        break;
        case enWeekDay::Monday:
        cout << "It's Monday!";
        break;
        case enWeekDay::Tuesday:
        cout << "It's Tuesday!";
        break;
        case enWeekDay::Wednesday:
        cout << "It's Wednesday!";
        break;
        case enWeekDay::Thursday:
        cout << "It's Thursday!";
        break;
        case enWeekDay::Friday:
        cout << "It's Friday!";
        break;
    }
}
int main() {
    WeekDay(WeekDayNumber(Number()));
    return 0;
}