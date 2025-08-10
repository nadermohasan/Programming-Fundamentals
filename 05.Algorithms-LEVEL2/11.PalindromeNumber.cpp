#include <iostream>
using namespace std;

// 123321
int ReadNumber(){
    int Number;
    cout << "Number: ";
    cin >> Number;
    return Number;
}

int ReverseOrder(int Number){
    int Reminder;
    int Number2 = 0;
    while(Number > 0){
        Reminder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Reminder;
    }
    return Number2; // ✅ iتم إضافته
}

bool isPalindrome(int Number){
    return ReverseOrder(Number) == Number;
}

void CheckPalindrome(int Number){
    if(isPalindrome(Number))
        cout << "Yes, It's a Palindrome Number";
    else
        cout << "No, It's not a Palindrome Number";
}    

int main() {
    CheckPalindrome(ReadNumber());
    return 0;
}