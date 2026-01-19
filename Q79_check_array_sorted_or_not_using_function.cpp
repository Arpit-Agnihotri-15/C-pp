#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 3, 2, 4, 5};

    cout << "Array 1: ";
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Is sorted: " << (isSorted(arr1) ? "Yes" : "No") << endl;

    cout << "Array 2: ";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Is sorted: " << (isSorted(arr2) ? "Yes" : "No") << endl;

    return 0;
}
