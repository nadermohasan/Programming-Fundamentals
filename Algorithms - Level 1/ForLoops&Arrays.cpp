#include <iostream>
using namespace std;

void ReadArrayData(int Arr[100], int &Length){
    cout << "Count of Data: ";
    cin >> Length;
    for(int i = 0; i < Length; i++){
        cin >> Arr[i];
    }
}
void PrintArrayData(int Arr[100], int Length){
    for(int i = 0; i < Length; i++){
        cout << "Grade " << i+ 1 << Arr[i];
    }
}
float Sum(int Arr[100], int Length){
    float sum = 0;
    for(int i = 0; i < Length; i++){
        sum += Arr[i];
    }
    return sum;
}
float Average(int Arr[100], int Length){
    float average = 0;
    for(int i = 0; i < Length; i++){
        average = Sum(Arr, Length) / Length;
    }
    return average;
}
int main() {
    int Arr[100]; int Length = 0;
    ReadArrayData(Arr, Length);
    PrintArrayData(Arr, Length);
    cout << Sum(Arr, Length);
    cout << Average(Arr, Length);
    return 0;
}