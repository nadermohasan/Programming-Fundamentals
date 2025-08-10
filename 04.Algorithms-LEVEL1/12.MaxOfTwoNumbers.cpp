#include <iostream>
using namespace std;
void ReadNumbers(int &first, int &second){
    cout << "First: ";
    cin >> first;
    cout << "Second: ";
    cin >> second;
}
int MaxOfTwo(int first, int second){
    if(first > second)
    return first;
    else
    return second;
}
int main() {
    int first, second;
    ReadNumbers(first, second);
    cout << MaxOfTwo(first, second);
    return 0;
}