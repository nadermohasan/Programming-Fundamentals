#include <iostream>
using namespace std;

int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
int ReadPower(){
    int Power;
    cout << "Enter a Power: ";
    cin >> Power;
    return Power;
}
int PowerToM(int Number, int M){
    int P = 1;
    if(M == 0)
    return 1;
    if(M == 1)
    return Number;
    for(int i = 1; i <= M; i++){
         P *= Number;
    }
    return P;
}

int main() {
    cout << PowerToM(ReadNumber(), ReadPower());
    return 0;
}