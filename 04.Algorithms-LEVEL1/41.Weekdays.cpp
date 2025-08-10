#include <iostream>
using namespace std;
int NumberOfHours(){
    int Hours;
    cout << "Hours: ";
    cin >> Hours;
    return Hours;
}
float HoursToDays(int Hours){
    return Hours / 24;
}
float DaysToWeek(int Hours){
    return HoursToDays(Hours) / 7;
}
void Print(int Hours){
    cout << " Weeks: " << DaysToWeek(Hours) << endl;
    cout << "Days: " << HoursToDays(Hours);
}
int main() {
    Print(NumberOfHours());
    return 0;
}