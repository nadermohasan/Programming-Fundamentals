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
void GetMiddleRow(int matrix[3][3], int rows, int cols) {
    int MiddleRow = rows / 2;
    cout << endl;
    for (int i = 0; i < cols; i++) {
        cout << matrix[MiddleRow][i] << "    ";
    }
}
void GetMiddleCol(int matrix[3][3], int rows, int cols) {
    int MiddleColumn = cols / 2;
    cout << endl;
    for (int i = 0; i < cols; i++) {
        cout << matrix[i][MiddleColumn] << "    ";
    }
}
int main() {
    srand(time(NULL));
    int matrix[3][3];
    GenerateRandomMatrix(matrix);
    GetMatrix(matrix);
    GetMiddleRow(matrix, 3, 3);
    GetMiddleCol(matrix, 3, 3);
    return 0;
}
