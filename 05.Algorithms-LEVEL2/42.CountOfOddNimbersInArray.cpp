#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
void FillArray(int arr[100], int Length){
    for(int i = 0; i < Length; i++){
        arr[i] = RandomNumber(0, 100);
    }
}
void PrintArray(int arr[100], int Length){
    for(int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
}
int CountOfOdd(int arr[100], int Length){
    int counter = 0;
    for(int i = 0; i < Length; i++){
        if(arr[i] % 2 != 0)
        counter++;
    }
    return counter;
}
int main() {
    srand(time(NULL));
    int arr[100];
    int Length = 10;
    FillArray(arr, Length);
    PrintArray(arr, Length);
    cout << "\nOdd Count is:  " << CountOfOdd(arr, Length);
    return 0;
}