#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
int main() {
    srand(time(0));
    cout << RandomNumber(1, 10);
    cout << RandomNumber(1, 10);
    cout << RandomNumber(1, 10);
    return 0;
}