#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
bool isPrime(int Number){
    int M = round(Number / 2);
    for(int counter = 2; counter <= M; counter++){
        if(Number % counter == 0)
        return false;
    }
    return true;
}
void PrintPrimesToN(int Range){
    for(int i = 2; i <= Range; i++){
        if(isPrime(i))
        cout << i << endl;
    }
}
int main() {
    PrintPrimesToN(ReadNumber());
    return 0;
}