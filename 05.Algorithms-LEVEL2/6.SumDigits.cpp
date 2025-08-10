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
    int sum = 0;
    while(Number > 0){
        Reminder = Number % 10;
    Number = Number / 10;
        sum += Reminder;
        if(Number == 0)
        break;
    }
    return sum;
}
int main() {
    cout << ReverseOrder(ReadNumber());
    return 0;
}