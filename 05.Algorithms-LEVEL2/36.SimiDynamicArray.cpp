#include <iostream>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
void InputArrayElement(int Number, int arr[100], int &Length){
    Length++;
    arr[Length - 1] = Number;
}
bool AddElements(int arr[100], int &Length){
    bool AddMore = 1;
    do{
        InputArrayElement(ReadNumber(), arr, Length);
        cout << "Do you want to add more ? [1] Yes || [0] No: ";
        cin >> AddMore;
    }while(AddMore);
    return AddMore;
}
void PrintArray(int arr[100], int Length){
    cout << "\nArray Elements: ";
    for(int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[100];
    int Length = 0;
    AddElements(arr, Length);
    PrintArray(arr, Length);
    return 0;
}