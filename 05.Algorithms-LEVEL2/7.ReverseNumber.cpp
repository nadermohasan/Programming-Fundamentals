#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
int ReverseOrder(int Number){
    int Reminder;
    int Number2 = 0;
    while(Number > 0){
        Reminder = Number % 10;
    Number = Number / 10;
        Number2 = Number2 * 10 + Reminder;
}
    return Number2;
}
int main() {
    cout << ReverseOrder(ReadNumber());
    return 0;
}