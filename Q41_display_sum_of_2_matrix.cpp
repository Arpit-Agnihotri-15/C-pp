#include <iostream>
using namespace std;

int main() {
    int m1, n1, m2, n2;
    cout << "Enter number of rows of 1st matrix:\n ";
    cin >> m1;
    cout << "Enter number of columns of 1st matrix:\n ";
    cin >> n1;
    cout << "Enter number of rows of 2nd matrix: \n";
    cin >> m2;
    cout << "Enter number of columns of 2nd matrix:\n ";
    cin >> n2;

    // Check if both matrices have the same dimensions
    if (m1 != m2 || n1 != n2) {
        cout << "Matrix addition not possible! Sizes must be the same.\n";
        return 0;
    }

    int a[m1][n1], b[m2][n2], sum[m1][n1];

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

    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}