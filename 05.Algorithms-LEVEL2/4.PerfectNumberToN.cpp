#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    do{
        cout << "Range: ";
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
void PerfectNumberToN(int Range){
    for(int i = 1; i <= Range; i++){
        if(isPerfect(i))
        cout << i << endl;
    }
}
int main() {
    PerfectNumberToN(ReadNumber());
    return 0;
}