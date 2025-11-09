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

    // Initialize min and second min
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    if (min2 == INT_MAX)
        cout << "No second minimum value (all elements are same/only one element)" << endl;
    else
        cout << "Second minimum value = " << min2 << endl;

    return 0;
}
