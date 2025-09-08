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
int GetMatrixSum(int matrix[3][3]) {
    int sum = 0;
    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols++) {
            sum += matrix[rows][cols];
        }
    }
    return sum;
}
int main() {
    srand(time(NULL));
    int matrix[3][3];
    GenerateRandomMatrix(matrix);
    GetMatrix(matrix);
    cout << "Sum of the matrix: " << GetMatrixSum(matrix);
    return 0;
}
