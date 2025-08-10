#include <iostream>
using namespace std;

struct strInfo{
    int Age;
    bool HaveLicense;
    bool HaveRecomend;
};

strInfo ReadInfo(){
    strInfo info;
    char answer;
    cout << "Your Age: ";
    cin >> info.Age;
    cout << "Do you have a license ? y/n: ";
    cin >> answer;
    if(answer == 'y'){
        info.HaveLicense = true;
    } else{
        info.HaveLicense = false;
    }
    cout << "Do you have a Recomebd ? y/n: ";
    cin >> answer;
    if(answer == 'y'){
        info.HaveRecomend = true;
    } else{
        info.HaveRecomend = false;
    }
    return info;
}
bool isAccepted(strInfo info){
    return (info.Age >= 21 && info.HaveLicense == true || info.HaveRecomend == true);
}
void PrintResult(strInfo info){
    if(isAccepted(info)){
        cout << "Hired!";
    } else{
        cout << "Rejected";
    }
}
int main(){
    PrintResult(ReadInfo());
}