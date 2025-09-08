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
int MinimumElement(int matrix[3][3]) {
    int number = INT16_MAX;
    int min = 0;
    cout << "Minimum Number in the matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] < number)
                number = matrix[i][j];
        }
    }
    min = number;
    return min;
}
int MaximumElement(int matrix[3][3]) {
    int number = INT16_MIN;
    int max = 0;
    cout << "\nMaximum Number in the matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > number)
                number = matrix[i][j];
        }
    }
    max = number;
    return max;
}
int main() {
    srand(time(NULL));
    int matrix[3][3];
    GenerateRandomMatrix(matrix);
    GetMatrix(matrix);
    cout << MinimumElement(matrix);
    cout << MaximumElement(matrix);
    return 0;
}
