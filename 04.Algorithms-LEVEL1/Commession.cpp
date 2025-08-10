#include <iostream>
using namespace std;

int ReadTotal(){
    int Total;
    cout << "Total Sales: ";
    cin >> Total;
    return Total;
}
float Comission(int Total){
    if(Total == 1000000)
    return Total * 0.01;
    if(Total >= 500000 && Total <= 1000000)
    return Total * 0.02;
    if(Total >= 100000 && Total <= 500000)
    return Total * 0.03;
    if(Total >= 50000 && Total <= 100000)
    return Total * 0.05;
    else
    return Total * 0;
}
int main() {
    cout << Comission(ReadTotal());
    return 0;
}