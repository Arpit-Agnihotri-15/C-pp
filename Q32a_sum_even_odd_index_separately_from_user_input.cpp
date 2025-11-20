#include <iostream>
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

    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)  
            {evenSum += arr[i];}
        else
            {oddSum += arr[i];}
    }

    cout << "Sum of even index elements: " << evenSum << endl;
    cout << "Sum of odd index elements: " << oddSum << endl;

    return 0;
}

