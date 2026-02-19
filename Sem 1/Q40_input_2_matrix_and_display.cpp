#include <iostream>
using namespace std;

int main() {
    int m1,n1,m2,n2;
    cout << "Enter size of row of 1st matix:\n ";
    cin >>m1;
    cout<< "Enter size of column of 1st matrix:\n ";
    cin >>n1;
    cout << "Enter size of row of 2nd matix:\n ";
    cin >>m2;
    cout<< "Enter size of column of 2nd matrix:\n ";
    cin >>n2;
    

    int a[m1][n1];

    cout << "Enter elements of 1st matrix:\n";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cin >> a[i][j];
        }
    }
    
    int b[m2][n2];

    cout << "Enter elements of 2nd matrix:\n";
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> b[i][j];
        }
    }

    cout << "1st matrix elements are:\n";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "2nd matrix elements are:\n";
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}