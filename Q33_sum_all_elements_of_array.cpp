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

    int sum =0;

    for (int i = 0; i < n; i++) {
        
        sum += arr[i];
    }

    cout << "Sum of all elements: " <<sum << endl;
    
    return 0;
}
