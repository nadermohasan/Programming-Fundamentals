#include <iostream>
using namespace std;
int ReadNumber(){
    int number;
    cout << "Enter Range: ";
    cin >> number;
    return number;
}
void PrintNumbersFrom1ToN(int N){
    for(int i = 1; i <= N; i++){
        cout << i << endl;
    }
}
void PrintNumbersFromNTo1(int N){
    for(int i = N; i >= 1; i--){
        cout << i << endl;
    }
}
int main() {
    PrintNumbersFrom1ToN(ReadNumber());
    cout << "-------------" << endl;
    PrintNumbersFromNTo1(ReadNumber());
    return 0;
}