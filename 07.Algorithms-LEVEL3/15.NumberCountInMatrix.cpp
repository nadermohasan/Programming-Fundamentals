#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Random(int From, int To) {
    return rand() % (To - From + 1) + From;
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
int ReadNumber() {
    int number;
    cout << "Enter a number to count in the matrix: ";
    cin >> number;
    return number;
}
int NumberCounterInMatrix(int matrix[3][3], int number) {
    int counter = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == number)
                counter++;
        }
    }
    return counter;
}
int main() {
    int matrix[3][3];
    GenerateRandomMatrix(matrix);
    GetMatrix(matrix);
    int number = ReadNumber();
    cout << "Number " << number << " count in the matrix is " << NumberCounterInMatrix(matrix, number);
    return 0;
}
