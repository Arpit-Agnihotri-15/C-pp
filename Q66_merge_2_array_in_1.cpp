#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    int a[n], b[n];

    
    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

  
    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

   
    int merged[2*n];

    
    for(int i = 0; i < n; i++) {
        merged[i] = a[i];
    }

    
    for(int i = 0; i < n; i++) {
        merged[n + i] = b[i];
    }

    
    cout << "Merged array:\n";
    for(int i = 0; i < 2*n; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}