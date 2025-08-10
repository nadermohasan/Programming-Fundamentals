#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Factorial Of: ";
    cin >> Number;
    return Number;
}
int Factorial(int N){
    int Factorial = 1;
    for(int i = 1; i <= N; i++){
        Factorial *= i;
    }
    return Factorial;
}
int main() {
    cout << Factorial(ReadNumber());
    return 0;
}