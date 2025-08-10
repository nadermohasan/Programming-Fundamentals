#include <iostream>
using namespace std;
int Number(string message){
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}
int LoanInstallmentMonths(int LoanInstallment, int PayedMonth){
    return LoanInstallment / PayedMonth;
}
int main() {
    int LoanInstallment = Number("Loan Installment: ");
    int PayedMonth = Number("Payed Month: ");
    cout << LoanInstallmentMonths(LoanInstallment, PayedMonth) << " Months";
    return 0;
}