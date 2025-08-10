#include <iostream>
using namespace std;
struct strDuration{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int Number(string message){
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}
strDuration Duration(){
    strDuration Duration;
    Duration.NumberOfDays = Number("Days: ");
    Duration.NumberOfHours = Number("Hours: ");
    Duration.NumberOfMinutes= Number("Minutes: ");
    Duration.NumberOfSeconds = Number("Seconds: ");
    return Duration;
}
int TotalSeconds(strDuration Duration){
    int TotalSeconds = 0;
    int DaysToSeconds = (Duration.NumberOfDays * 24) * 60 * 60;
    int HoursToSeconds = Duration.NumberOfHours * 60 * 60;
    int MinutesToSeconds = Duration.NumberOfMinutes * 60;
    return TotalSeconds += DaysToSeconds + HoursToSeconds + MinutesToSeconds + Duration.NumberOfSeconds;
}
int main() {
    cout << TotalSeconds(Duration()) << " Seconds";
    return 0;
}