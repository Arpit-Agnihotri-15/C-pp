#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "Enter size of row of 2D array:\n ";
    cin >>m;
    cout<< "Enter size of column of 2D array:\n ";
    cin >>n;
    

    int a[m][n];

    cout << "Enter elements of 2D array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "2D Array elements are:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}