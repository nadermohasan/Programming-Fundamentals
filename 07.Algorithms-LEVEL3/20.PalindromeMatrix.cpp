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
bool isPalindrome(int matrix[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols/2; j++) {
            if (matrix[i][j] != matrix[i][cols - 1 - j]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    srand(time(NULL));
    int matrix[3][3] = {
        {1, 2, 1},
        {5, 5, 5},
        {7, 3, 7}
    };
    GetMatrix(matrix);
    if (isPalindrome(matrix, 3, 3)) {
        cout << "Yes, It's a Palindrome" << endl;
    }
    else {
        cout << "No, It's not a Palindrome" << endl;
    }
    return 0;
}
