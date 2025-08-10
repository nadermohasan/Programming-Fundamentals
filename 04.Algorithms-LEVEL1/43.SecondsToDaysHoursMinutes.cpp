#include <iostream>
using namespace std;

struct strDuration {
    float NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadNumberOfSeconds() {
    int Seconds;
    cout << "Seconds: ";
    cin >> Seconds;
    return Seconds;
}

strDuration Duration() {
    strDuration Duration;
    int Reminder;

    int Seconds = ReadNumberOfSeconds();

    int SecondsPerDay = 86400;
    int SecondsPerHour = 3600;
    int SecondsPerMinute = 60;

    Duration.NumberOfDays = Seconds / SecondsPerDay;
    Reminder = Seconds % SecondsPerDay;

    Duration.NumberOfHours = Reminder / SecondsPerHour;
    Reminder = Reminder % SecondsPerHour;

    Duration.NumberOfMinutes = Reminder / SecondsPerMinute;
    Reminder = Reminder % SecondsPerMinute;

    Duration.NumberOfSeconds = Reminder;

    return Duration;
}

void GetDaysHoursMinutes(strDuration Duration) {
    cout << Duration.NumberOfDays << ":"
         << Duration.NumberOfHours << ":"
         << Duration.NumberOfMinutes << ":"
         << Duration.NumberOfSeconds << endl;
}

int main() {
    GetDaysHoursMinutes(Duration());
    return 0;
}