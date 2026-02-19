#include <iostream>
using namespace std;

int main() {
    int m1, n1, m2, n2;

    cout << "Enter rows and columns of 1st matrix: \n";
    cin >> m1 >> n1;

    cout << "Enter rows and columns of 2nd matrix: \n";
    cin >> m2 >> n2;

    // Check multiplication condition
    if (n1 != m2) {
        cout << "Matrix multiplication not possible! (Columns of 1st != Rows of 2nd)\n";
        return 0;
    }

    int a[m1][n1], b[m2][n2], c[m1][n2];

    cout << "\nEnter elements of 1st matrix:\n";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of 2nd matrix:\n";
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> b[i][j];
        }
    }

    // Initialize result matrix with 0
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) { 
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nResultant Matrix (Multiplication):\n";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}