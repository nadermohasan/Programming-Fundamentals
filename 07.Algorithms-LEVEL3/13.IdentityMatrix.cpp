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
                matrix[i][j] = 1;
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
bool isIdentity(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // check for diagonal elements;
            if (i == j && matrix[i][j] != 1) {
                return false;
            }
            /// check for rest elements;
            else if(i != j && matrix[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}
int main() {
    srand(time(NULL));
    int matrix[3][3];
    int identity[3][3];
    GenerateRandomMatrix(matrix);
    GenerateIdentityMatrix(identity);
    GetMatrix(matrix);
    GetMatrix(identity);
    if (isIdentity(identity)) {
        cout << "YES!, Matrix is Identity";
    }
    else {
        cout << "NO!, Matrix is not Identity";
    }
    return 0;
}
