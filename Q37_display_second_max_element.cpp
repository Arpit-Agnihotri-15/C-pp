#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements:\n";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and second max
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN)
        cout << "No second maximum value (all elements are same/only one element)" << endl;
    else
        cout << "Second maximum value = " << max2 << endl;

    return 0;
}
