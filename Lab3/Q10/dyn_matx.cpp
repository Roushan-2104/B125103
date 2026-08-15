#include <iostream>
using namespace std;

void accept(int **mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
}

void display(int **mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    // Allocate row pointers
    int **mat1 = new int*[m];
    int **mat2 = new int*[m];

    // Allocate each row
    for (int i = 0; i < m; i++) {
        mat1[i] = new int[n];
        mat2[i] = new int[n];
    }

    cout << "Matrix 1:" << endl;
    accept(mat1, m, n);
    cout << "Matrix 2:" << endl;
    accept(mat2, m, n);

    // Matrix addition
    int **result = new int*[m];
    for (int i = 0; i < m; i++) {
        result[i] = new int[n];
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "\nResultant Matrix:" << endl;
    display(result, m, n);

    // Deallocate memory
    for (int i = 0; i < m; i++) {
        delete[] mat1[i];
        delete[] mat2[i];
        delete[] result[i];
    }
    delete[] mat1;
    delete[] mat2;
    delete[] result;
    mat1 = nullptr;
    mat2 = nullptr;
    result = nullptr;
    return 0;
}
