#include <iostream>
using namespace std;
void readGrades(int x[3]){
    cout << "Grade 1: ";
    cin >> x[0];
    cout << "\nGrade 2: ";
    cin >> x[1];
    cout << "\nGrade 3: ";
    cin >> x[2];
}
int getAverage(int x[3]){
    return((x[0] + x[1] + x[2]) / 3);
}
int main() {
    int arr[3];
    readGrades(arr);
    cout << getAverage(arr);
    return 0;
}