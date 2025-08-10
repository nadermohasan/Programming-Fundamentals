#include <iostream>
using namespace std;

// دالة لقراءة رقم من المستخدم مع رسالة
int ReadNumber(string message){
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}

// دالة لقراءة عناصر المصفوفة
void ReadArrayElements(int arr[], int Length){
    for(int i = 0; i < Length; i++){
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
}

// دالة لحساب تكرار عنصر معين في المصفوفة
int FrequencyOfRepeatedElement(int arr[], int Length){
    int Number = ReadNumber("Enter the number you want to check: ");
    int Counter = 0;
    for(int i = 0; i < Length; i++){
        if(arr[i] == Number)
            Counter++;
    }
    return Counter;
}

int main() {
    int Length = ReadNumber("Enter array size: ");
    
    // تعريف المصفوفة بالحجم المدخل
    int arr [Length];
    
    ReadArrayElements(arr, Length);
    
    int frequency = FrequencyOfRepeatedElement(arr, Length);
    cout << "Frequency: " << frequency << endl;
    
    return 0;
}