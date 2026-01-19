#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n], rank[n];

    
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    
    for (int i = 0; i < n; i++) {
        int r = 1;
        for (int j = 0; j < n; j++) {
            if (a[j] < a[i])
                r++;
        }
        rank[i] = r;
    }

    
    cout << "Ranks: ";
    for (int i = 0; i < n; i++)
        cout << rank[i] << " ";

    return 0;
}