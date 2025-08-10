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
void PrintArray(int arr[100], int Length){
    for(int i = 0; i < Length; i++){
        cout << arr[i];
        if(i < Length-1)
        cout << " ";
    }
}
int MinArray(int arr[100], int Length){
    int Min = arr[0];
    for(int i = 0; i < Length; i++){
        if(arr[i] < Min)
        Min = arr[i];
    }
    return Min;
}
int SumArray(int arr[100], int Length){
    int Sum = 0;
    for(int i = 0; i < Length; i++){
        Sum += arr[i];
    }
    return Sum;
}
int main() {
    srand(time(0));
    int Length = ReadNumber("Array Size: ");
    int arr[Length];
    FillArray(arr, Length);
    PrintArray(arr, Length);
    cout << "\nSum of Array Element: " << SumArray(arr, Length);
    return 0;
}