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
int atIndexOf(int arr[100], int Length, int Element){
    int atIndexOf;
    for(int i = 0; i < Length; i++){
        if(arr[i] == Element)
        atIndexOf = i;
    }
    return atIndexOf;
}
int atOrderOf(int arr[100], int Length, int Element){
    int atOrderOf;
    for(int i = 0; i < Length; i++){
        if(arr[i] == Element)
        atOrderOf = i+1;
    }
    return atOrderOf;
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
    int Element = ReadNumber("\nEnter the Number you search for: ");
    cout << "\nThe Number, is found at index: " << atIndexOf(arr, Length, Element);
    cout << "\nThe Number, is in Order of: " << atOrderOf(arr, Length, Element);
    return 0;
}