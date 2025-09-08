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
void MultiplyMatrices(int matrix1[3][3], int matrix2[3][3], int multiply[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            multiply[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
}
int main() {
    srand(time(NULL));
    int matrix1[3][3];
    int matrix2[3][3];
    int multiply[3][3];
    GenerateRandomMatrix(matrix1);
    GenerateRandomMatrix(matrix2);
    GetMatrix(matrix1);
    GetMatrix(matrix2);
    MultiplyMatrices(matrix1, matrix2, multiply);
    GetMatrix(multiply);
    return 0;
}
