#include <iostream>
using namespace std;
int ReadNumber(){
    int number;
    cout << "Number: ";
    cin >> number;
    return number;
}
double HalfNumber(int number){
    return number/2;
}
void GetHalfNumber(){
    cout << HalfNumber(ReadNumber());
}
int main() {
    GetHalfNumber();
    return 0;
}