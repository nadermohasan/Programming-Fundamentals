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
        arr[i] = i+1;
    }
}
void Swap(int &A, int &B){
    int temp;
    temp = A;
    A = B;
    B = temp;
}
void ShuffleArray(int arr[100], int Length){
    // 1 2 3 4 5 6 7 8 9 10
    for(int i = 0; i < Length; i++){
        int RandomIndex = RandomNumber(1, Length) - 1;
        Swap(arr[i], arr[RandomIndex]);
    }
}
void PrintArray(int arr[100], int Length){
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
    ShuffleArray(arr, Length);
    cout << "\nAfter Shuffle: ";
    PrintArray(arr, Length);
    return 0;
}