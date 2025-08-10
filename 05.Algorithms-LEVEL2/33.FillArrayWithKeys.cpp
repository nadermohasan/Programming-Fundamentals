#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enCharType{
    Capital = 1,
    Small,
    Special,
    Digit
};
int ReadNumber(string message){
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
char CharType(enCharType Type){
    if(Type == 1)
    return (char)RandomNumber(65, 90);
    if(Type == 2)
    return (char)RandomNumber(97, 122);
    if(Type == 3)
    return (char)RandomNumber(33, 47);
}
string GenerateWord(){
    string Word = "";
    for(int i = 0; i < 4; i++){
        Word += CharType(enCharType::Capital);
    }
    return Word;
}
string GenerateKey(){
    string Key = "";
    for(int i = 0; i < 4; i++){
        Key += GenerateWord();
        if(i < 3)
        Key += "-";
    }
    return Key;
}
void FillArrayWithKey(string arr[100], int Length){
    for(int i = 0; i < Length; i++){
        arr[i] = GenerateKey();
    }
}
void PrintArray(string arr[100], int Length){
    for(int i = 0; i < Length; i++){
        cout << "Array[" << i << "]: " << arr[i] << endl;
    }
}
int main() {
    srand(time(NULL));
    string arr[100];
    int Length = ReadNumber("Array Size: ");
    FillArrayWithKey(arr, Length);
    PrintArray(arr, Length);
    return 0;
}