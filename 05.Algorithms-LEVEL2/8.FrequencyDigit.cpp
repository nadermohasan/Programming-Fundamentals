#include <iostream>
using namespace std;
int ReadNumber(string message){
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}
int FrequencyDigit(int Number, int FrequencyOfNumber){
    int Reminder;
    int Counter = 0;
    while(Number > 0){
        Reminder = Number % 10;
        Number = Number / 10;
        if(FrequencyOfNumber == Reminder)
        Counter++;
}
    return Counter;
}
int main() {
    cout << FrequencyDigit(ReadNumber("Enter a Number: "), ReadNumber("Digit: "));
    return 0;
}