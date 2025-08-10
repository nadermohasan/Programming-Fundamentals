#include <iostream>
using namespace std;
enum enOddOrEven{Odd, Even};
int ReadNumber(){
    int number;
    cout << "Enter N: ";
    cin >> number;
    return number;
}
enOddOrEven CheckOddOrEven(int Number){
    if(Number % 2 != 0)
    return enOddOrEven:: Odd;
    else
    return enOddOrEven::Even;
}
int SumOddNumbersFrom1ToN(int N){
    int sum = 0;
    for(int i = 1; i <= N; i++){
        if(CheckOddOrEven(i) == enOddOrEven::Odd)
        sum += i;
    }
    return sum;
}
int SumEvenNumbersFrom1ToN(int N){
    int sum = 0;
    for(int i = 1; i <= N; i++){
        if(CheckOddOrEven(i) == enOddOrEven::Even)
        sum += i;
    }
    return sum;
}
int main() {
    cout << SumOddNumbersFrom1ToN(ReadNumber());
    return 0;
}