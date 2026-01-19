#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, count = 0;

    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Enter the number to find occurrence of: ";
    cin >> a;

    // Count occurrence
    for(int i = 0; i < n; i++) {
        if(v[i] == a) {
            count++;
        }
    }

    cout << "Occurrence of " << a << " = " << count << endl;

    return 0;
}
