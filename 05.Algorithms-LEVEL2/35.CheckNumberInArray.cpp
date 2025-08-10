#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
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
void FillArray(int arr[100], int Length){
    for(int i = 0; i < Length; i++){
        arr[i] = RandomNumber(1, 100);
    }
}
bool isIncludes(int arr[100], int Length, int Number){
    for(int i = 0; i < Length; i++){
        if(arr[i] == Number)
        return true;
    }
    return false;
}
void PrintArray(int arr[100], int Length){
    cout << "Array Elements: ";
    for(int i = 0; i < Length; i++){
        cout << arr[i];
        if(i < Length-1)
        cout << " ";
    }
}
int main() {
    srand(time(0));
    int Length = ReadNumber("Array Size: ");
    int arr[Length];
    FillArray(arr, Length);
    PrintArray(arr, Length);
    int Number = ReadNumber("\nEnter the Number you search for: ");
    if(isIncludes(arr, Length, Number)){
        cout << "Yes! The Number is Available.";
    } else
    cout << "No! The Number is not Available.";
    return 0;
}