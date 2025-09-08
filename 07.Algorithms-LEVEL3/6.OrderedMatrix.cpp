#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Random(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void GenerateRandomMatrix(int matrix[3][3]) {
    cout << "The following is an ordered matrix: " << endl;
    int counter = 0;
    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols++) {
            counter++;
            matrix[rows][cols] = counter;
        }
    }
}

int SumRow(int matrix[3][3], int RowNumber, int Cols) {
    int sum = 0;
    for (int i = 0; i < Cols; i++) { // fix: use i not Cols
        sum += matrix[RowNumber][i];
    }
    return sum;
}

void SumEachRow(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i + 1 << " = " << SumRow(matrix, i, 3) << endl; // fix: pass 3 not i
    }
}

void GetMatrix(int matrix[3][3]) {
    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols++) {
            cout << matrix[rows][cols] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(NULL));
    int matrix[3][3];
    GenerateRandomMatrix(matrix);
    GetMatrix(matrix);
    SumEachRow(matrix);
}
