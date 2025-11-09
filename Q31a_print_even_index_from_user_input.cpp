#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements:\n" ;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements at even indexes are:\n";
    for(int i = 0; i < n; i += 2) {  
        cout << arr[i] << " ";
    }

    return 0;
}


