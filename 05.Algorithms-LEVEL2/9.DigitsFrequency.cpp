#include <iostream>
using namespace std;

int ReadNumber(string message) {
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}

int FrequencyDigit(int Number, int FrequencyOfNumber) {
    int Reminder;
    int Counter = 0;
    while (Number > 0) {
        Reminder = Number % 10;
        Number = Number / 10;
        if (FrequencyOfNumber == Reminder)
            Counter++;
    }
    return Counter;
}

void DigitsFrequency(int Number) {
    int DigitFreq;
    for (int i = 0; i <= 9; i++) {
        DigitFreq = FrequencyDigit(Number, i);
        if(DigitFreq > 0)
        cout << "Digit " << i << " Frequency: " << DigitFreq << endl;
    }
}

int main() {
    DigitsFrequency(ReadNumber("Enter a Number: "));
    return 0;
}