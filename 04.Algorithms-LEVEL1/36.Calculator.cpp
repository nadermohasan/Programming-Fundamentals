#include <iostream>
using namespace std;
enum enOperation{Add = '+', Minus = '-', Multiply = '*', Divide = '/'};
float ReadNumber(string message){
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}
enOperation ReadOperation(){
    char Operation;
    cout << "Enter an Operation: ";
    cin >> Operation;
    return (enOperation)Operation;
}
float Calculate(float NumberOne, float NumberTwo, enOperation Operation){
    if(Operation == enOperation::Add)
    return NumberOne + NumberTwo;
    if(Operation == enOperation::Minus)
    return NumberOne - NumberTwo;
    if(Operation == enOperation::Multiply)
    return NumberOne * NumberTwo;
    if(Operation == enOperation::Divide)
    return NumberOne / NumberTwo;
}
int main() {
    cout << Calculate(ReadNumber("Enter First Number: "), ReadNumber("Enter Second Number"), ReadOperation());
    return 0;
}