#include <iostream>
using namespace std;
enum enPassFail {Pass, Fail};
void ReadNumbers(int &First, int &Second, int &Last){
    cout << "First: ";
    cin >> First;
    cout << "Second: ";
    cin >> Second;
    cout << "Last: ";
    cin >> Last;
}
int SumOfThree(int First, int Second, int Last){
    int SumOfThree = 0;
    SumOfThree = First + Second + Last;
    return SumOfThree;
}
int Average(int First, int Second, int Last){
    int Average = 0;
    Average = (First + Second + Last) / 3;
    return Average;
}
enPassFail PassFail(int Average){
    if(Average >= 50 && Average <= 100){
        return enPassFail::Pass;
    } else{
        return enPassFail::Fail;
    }
}
void GetPassFail(enPassFail PassFail){
    switch (PassFail){
        case enPassFail::Pass:
        cout <<  "Pass!";
        break;
        
        case enPassFail::Fail:
        cout << "Fail!";
        break;
    }
}
int main() {
    int first, second, last;
    ReadNumbers(first, second, last);
    GetPassFail(PassFail(Average(first, second, last)));
    return 0;
}