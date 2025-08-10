#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
int SumUntil(){
    int Sum = 0;
    int Number;
    do{
        Number = ReadNumber();
        if(Number == -99){
            break;
        }
        Sum += Number;
    }while(Number != -99);
    return Sum;
}
int main() {
    cout << SumUntil();
    return 0;
}