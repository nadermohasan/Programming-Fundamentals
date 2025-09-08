#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Random(int From, int To) {
    return rand() % (To - From + 1) + From;
}
void GenerateRandomMatrix(int matrix[3][3]) {
    cout << "The following is random matrix: " << endl;
    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols++) {
            matrix[rows][cols] = Random(0, 10);
        }
    }
}
int SumCol(int matrix[3][3], int Rows, int ColsNumber) {
    int sum = 0;
    for (int i; i <= Rows; i++) {
        sum += matrix[Rows][ColsNumber];
    }
    return sum;
}
void SumEachCol(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        cout << "Row" << i + 1 << " = " << SumCol(matrix, i, i);
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
int main()
{
    srand(time(NULL));
    int matrix[3][3];
    GenerateRandomMatrix(matrix);
    GetMatrix(matrix);
    SumEachCol(matrix);
}
