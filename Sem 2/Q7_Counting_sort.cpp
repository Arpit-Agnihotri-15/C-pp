#include <iostream>
#include <vector>
#include <climits>   // for INT_MIN
using namespace std;

void countSort(vector<int> &v) {
    int n = v.size();

    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++) {
        max_ele = max(v[i], max_ele);
    }

    vector<int> freq(max_ele + 1, 0);

    // Frequency array
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }

    // Prefix sum
    for (int i = 1; i <= max_ele; i++) {
        freq[i] += freq[i - 1];
    }

    vector<int> ans(n);

    // Stable sorting (right to left)
    for (int i = n - 1; i >= 0; i--) {
        ans[--freq[v[i]]] = v[i];
    }

    // Copy back
    for (int i = 0; i < n; i++) {
        v[i] = ans[i];
    }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    countSort(v);

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}