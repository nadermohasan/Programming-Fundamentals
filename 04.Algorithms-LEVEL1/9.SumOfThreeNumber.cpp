#include <iostream>
using namespace std;
void ReadNumbers(int &First, int &Second, int &Last){
    cout << "First: ";
    cin >> First;
    cout << "Second: ";
    cin >> Second;
    cout << "Last: ";
    cin >> Last;
}
int SumOfThree(int First, int Second, int Last){
    int SumOfThree = 0;
    SumOfThree = First + Second + Last;
    return SumOfThree;
}
int Average(int First, int Second, int Last){
    int Average = 0;
    Average = (First + Second + Last) / 3;
    return Average;
}
int main() {
    int First, Second, Last;
    ReadNumbers(First, Second, Last);
    cout << SumOfThree(First, Second, Last);
    cout << Average(First, Second, Last);
    return 0;
}