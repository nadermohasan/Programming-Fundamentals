#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    do{
        cout << "Enter a Number: ";
        cin >> Number;
    }while(Number <= 0);
    return Number;
}
bool isPerfect(int Number){
    int sum = 0;
    for(int i = 1; i < Number; i++){
        if(Number % i == 0)
        sum += i;
    }
    return Number == sum;
}
void CheckPerfect(int Number){
    if(isPerfect(Number))
    cout << Number << " is Perfect";
    else
    cout << Number << " is Not Perfect";
}
int main() {
    CheckPerfect(ReadNumber());
    return 0;
}