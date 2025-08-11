#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enPrimNotPrime{Prime, NotPrime};
int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
enPrimNotPrime CheckPrime(int Number){
    int M = Number / 2;
    
    // Loop from 2 to M to test for divisibility.
    for (int Counter = 2; Counter <= M; Counter++)
    {
        // If Number is divisible by any Counter, then it is not a prime.
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;  // Return NotPrime immediately.
    }
    
    // If no divisors were found, return Prime.
    return enPrimNotPrime::Prime;
}
void FillArray(int arr[100], int Length){
    for(int i = 0; i < Length; i++){
        arr[i] = RandomNumber(1, 100);
    }
}
void CopyArray(int arr[100], int arr2[100], int Length){
    for(int i = 0; i < Length; i++){
            arr2[i] = arr[i];
    }
}
void GetArray(int arr[100], int Length){
    cout << "Array Elements: ";
    for(int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
    cout << "\n.........................\n";
}
void SumOfTwoArray(int arr[100], int arr2[100], int arr3[100], int Length){
    for(int i = 0; i < 10; i++){
        arr3[i] = arr[i] + arr2[i];
    }
}
int main()
{
    srand(time(NULL));
    int arr[100], arr2[100], arr3[100];
    FillArray(arr, 10);
    GetArray(arr, 10);
    CopyArray(arr, arr2, 10);
    GetArray(arr2, 10);
    SumOfTwoArray(arr, arr2, arr3, 10);
    GetArray(arr3, 10);
    return 0;
}