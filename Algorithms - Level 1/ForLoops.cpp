#include <iostream>
using namespace std;

void ReadArrayData(int Arr[100], int &Length){
    cout << "Count of Data: ";
    cin >> Length;
    for(int i = 0; i < Length; i++){
        cout << "Grade " << i+1 << ": ";
        cin >> Arr[i];
    }
}
void PrintArrayData(int Arr[100], int Length){
    cout << "***********************\n";
    for(int i = 0; i < Length; i++){
        cout << "Grade " << i+ 1 << ": " << Arr[i] << endl;
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
    cout << "Sum: "<< Sum(Arr, Length) << endl
    cout << "Average: " << Average(Arr, Length);
    return 0;
}