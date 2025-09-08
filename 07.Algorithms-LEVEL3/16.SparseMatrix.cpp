#include <iostream>
using namespace std;
int NumberCounterInMatrix(int matrix[3][3], int number) {
    int counter = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == number)
                counter++;
        }
    }
    return counter;
}
bool isSparse(int matrix[3][3]) {
    int matrixSize = 3 * 3;
    return(NumberCounterInMatrix(matrix, 0) >= ceil(matrixSize / 2));
}
int main()
{
    int matrix[3][3] = {
        {0, 0, 3},
        {1, 3, 7},
        {5, 0, 8}
    };
    if (isSparse(matrix)) {
        cout << "Yes, It's a Sparse Matrix!";
    }
    else {
        cout << "No, It's not a sparse matrix!";
    }
}

