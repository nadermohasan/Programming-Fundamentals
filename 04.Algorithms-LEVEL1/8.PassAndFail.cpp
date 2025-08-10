#include <iostream>
using namespace std;
enum enPassFail {Pass, Fail};

int ReadMark(){
    int Mark;
    do{
        cout << "Mark: ";
        cin >> Mark;
    } while(Mark < 0 || Mark > 100);
    return Mark;
}
enPassFail PassFail(int Mark){
    if(Mark >= 50 && Mark <= 100){
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
int main(){
    GetPassFail(PassFail(ReadMark()));
}