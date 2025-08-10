#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadNumber(){
    int Number;
    cout << "Number of Keys: ";
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
enum enGenerateChar{
    SmallLetter = 1,
    CapitalLetter,
    SpecialCharacter,
    Digit
};
char enGenerateRandom(enGenerateChar randomchar){
    switch(randomchar){
        case enGenerateChar::SmallLetter:
        return (char)RandomNumber(97, 122);
        break;
        
        case enGenerateChar::CapitalLetter:
        return (char)RandomNumber(65, 90);
        break;
        
        case enGenerateChar::SpecialCharacter:
        return (char)RandomNumber(33, 47);
        break;
        
        case enGenerateChar::Digit:
        return (char)RandomNumber(0, 9);
        break;
    }
}
string GenerateWord(short Length, enGenerateChar CharType){
    string Word = "";
    for(int i = 1; i <= 4; i++){
        Word += enGenerateRandom(CharType);
    }
    return Word;
}
string GenerateKey(){
    string KEY = "";
    for(int i = 1; i <= 4; i++){
    KEY += GenerateWord(4, enGenerateChar::CapitalLetter);
        if(i < 4)
        KEY += "-";
    }
    return KEY;
}
void GenerateKeys(int NumberOfKeys){
    for(int i = 1; i <= NumberOfKeys; i++){
        cout << "Key[" << i << "] " << GenerateKey() << endl;
    }
}
int main() {
    srand(time(0));
    GenerateKeys(ReadNumber());
    return 0;
}