#include <iostream>
using namespace std;
void FillArray(int arr[100], int &Length){
    Length = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}
bool isPalindrome(int arr[100], int Length){
    // 10 20 30 30 20 10
    int pointer = Length - 1;
    for(int i = 0; i < Length; i++){
        if(arr[i] != arr[pointer - i])
        return false;
    }
    return true;
}
int main() {
    int arr[100];
    int Length = 0;
    FillArray(arr, Length);
    if(isPalindrome(arr, Length))
    cout << "It's a Palindrome!";
    else
    cout << "It's not a Palindrome!";
    return 0;
}