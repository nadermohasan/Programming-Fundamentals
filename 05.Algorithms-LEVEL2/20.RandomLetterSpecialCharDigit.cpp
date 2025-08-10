#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enRandomChar{
    SmallLetter = 1,
    CapitalLetter,
    SpecialCharacter,
    Digit
};
char GenerateRandomCharacter(enRandomChar random){
    switch(random){
        case enRandomChar::SmallLetter:
        return (char)RandomNumber(97, 122);
        break;
        
        case enRandomChar::CapitalLetter:
        return (char)RandomNumber(65, 90);
        break;
        
        case enRandomChar::SpecialCharacter:
        return (char)RandomNumber(33, 47);
        break;
    }
}
int main() {
    srand(time(0));
    cout << GenerateRandomCharacter(SmallLetter) << endl;
    cout << GenerateRandomCharacter(CapitalLetter) << endl;
    cout << GenerateRandomCharacter(SpecialCharacter) << endl;
    return 0;
}