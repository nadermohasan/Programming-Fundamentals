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
bool CheckEquality(int matrix[3][3], int matrix2[3][3]) {
    bool equality = true;
    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols) {
            if (matrix[rows][cols] != matrix2[rows][cols]) {
                equality = false;
                return equality;
            }
        }
    }
    return equality;
}
bool isEqualityMatrix(int matrix[3][3], int matrix2[3][3]) {
    return(CheckEquality(matrix, matrix2));
}
int main() {
    srand(time(NULL));
    int matrix[3][3];
    int matrix2[3][3];
    GenerateRandomMatrix(matrix);
    GenerateRandomMatrix(matrix2);
    GetMatrix(matrix);
    GetMatrix(matrix2);
    if (isEqualityMatrix(matrix, matrix2)) {
        cout << "YES!, Matrices are Equal";
    }
    else {
        cout << "NO!, Matrices are not Equal";
    }
    return 0;
}
