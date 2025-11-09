#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of 2D array: ";
    cin >> n;

    int a[n][n];

    cout << "Enter elements of 2D array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "2D Array elements are:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}