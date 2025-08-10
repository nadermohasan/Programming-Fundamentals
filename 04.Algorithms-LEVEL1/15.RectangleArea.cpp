#include <iostream>
using namespace std;
void ReadNumbers(int &length, int &width){
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
}
int RectangleArea(int length, int width){
    return length * width;
}
void PrintArea(int length, int width){
    cout << RectangleArea(length, width);
}
int main() {
    int length, width;
    ReadNumbers(length, width);
    PrintArea(length, width);
    return 0;
}