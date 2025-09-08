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
void GenerateIdentityMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j)
                matrix[i][j] = 9;
            else
                matrix[i][j] = 0;
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
// Scalar Matrix: when the diagonal are equal regardless the value;
bool isScalar(int matrix[3][3]) {
    int FirstDigit = matrix[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // check for diagonal;
            if (i == j && matrix[i][j] != FirstDigit) {
                return false;
            }
            /// check for rest elements;
            if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int matrix[3][3];
    int scalar[3][3];
    GenerateRandomMatrix(matrix);
    GenerateIdentityMatrix(scalar);
    GetMatrix(matrix);
    GetMatrix(scalar);
    if (isScalar(scalar)) {
        cout << "YES!, Matrix is Scalar";
    }
    else {
        cout << "NO!, Matrix is not Scalar";
    }
    return 0;
}
