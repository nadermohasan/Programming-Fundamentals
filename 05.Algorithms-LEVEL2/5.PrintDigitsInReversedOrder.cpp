#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
void ReverseOrder(int Number){
    int Reminder;
    int temp;
    while(Number > 0){
        Reminder = Number % 10;
    Number = Number / 10;
        cout << Reminder;
        if(Number == 0)
        break;
    }
}
int main() {
    ReverseOrder(ReadNumber());
    return 0;
}