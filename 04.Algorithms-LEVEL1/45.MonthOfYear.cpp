#include <iostream>
using namespace std;
enum enMonthOfYear{Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
int ReadNumber(){
    int Number;
    cout << "Month Number: ";
    cin >> Number;
    return Number;
}
enMonthOfYear CheckMonth(int Number){
    if(Number == 1)
    return enMonthOfYear::Jan;
    if(Number == 2)
    return enMonthOfYear::Feb;
    if(Number == 3)
    return enMonthOfYear::Mar;
    if(Number == 4)
    return enMonthOfYear::Apr;
    if(Number == 5)
    return enMonthOfYear::May;
    if(Number == 6)
    return enMonthOfYear::Jun;
    if(Number == 7)
    return enMonthOfYear::Jul;
    if(Number == 8)
    return enMonthOfYear::Aug;
    if(Number == 9)
    return enMonthOfYear::Sep;
    if(Number == 10)
    return enMonthOfYear::Oct;
    if(Number == 11)
    return enMonthOfYear::Nov;
    if(Number == 12)
    return enMonthOfYear::Dec;
}
string MonthName(enMonthOfYear MonthYear){
    switch(MonthYear){
        case enMonthOfYear::Jan:
        return "January!";
        break;
        case enMonthOfYear::Feb:
        return "February!";
        break;
    }
}
int main() {
    cout << MonthName(CheckMonth(ReadNumber()));
    return 0;
}