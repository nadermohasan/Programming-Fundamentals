#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Random(int From, int To) {
    return rand() % (To - From + 1) + From;
}
int ReadNumber() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}
void GenerateRandomMatrix(int matrix[3][3]) {
    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols++) {
            matrix[rows][cols] = Random(0, 10);
        }
    }
}
void GetMatrix(int matrix[3][3]) {
    cout << "The following is a Random Matrix: " << endl;
    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols++) {
            cout << matrix[rows][cols] << "    ";
        }
        cout << endl;
    }
}
bool isNumberExist(int matrix[3][3], int number) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == number)
                return true;
        }
    }
    return false;
}
int main() {
    srand(time(NULL));
    int matrix[3][3];
    GenerateRandomMatrix(matrix);
    GetMatrix(matrix);
    if (isNumberExist(matrix, ReadNumber())) {
        cout << "Yes, the number is there.";
    }
    else {
        cout << "No, the number isn't there.";
    }
    return 0;
}
