#include <iostream>
using namespace std;
void ReadNumbers(int &first, int &second){
    cout << "First: ";
    cin >> first;
    cout << "Second: ";
    cin >> second;
}
void Swap(int &first, int &last){
    int temp;
    temp = first;
    first = last;
    last = temp;
}
void Print(int first, int last){
    cout << first << endl;
    cout << last;
}
int main() {
    int first, last;
    ReadNumbers(first, last);
    Swap(first, last);
    Print(first, last);
    return 0;
}